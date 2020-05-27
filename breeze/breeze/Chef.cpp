 #include "Chef.h"
#include <fstream>
#include <string.h>

chef::chef() :Total_Orders(0)
{
    salary = 25000;
    Working_Order_Code = 0;
}

bool chef::setID(string id)
{
    try
    {
        chef C;
        int f = 0, comp;
        ifstream is("chef.dat", ios::binary);
        is.seekg(0);
        bool empty = (is.get(), is.eof());
        if (empty != 1)
        {
            is.seekg(0);
            while (!is.eof())
            {
                is.read((char*)&C, sizeof(C));
                if (C.getID() == id)
                {
                    f = 1;
                    break;
                }
                else continue;
            }
        }
        if (f == 0)
        {
            if (id[0] == 'C' && id[1] == '_')
            {
                strcpy_s(Staff_ID, id.c_str());
                return true;
            }
            else
            {
                throw(1);
            }
        }
        else
        {
            throw(1);
        }
        is.close();
    }
    catch (...)
    {
        strcpy(Staff_ID, "");
        return false;
    }
}

bool chef::setPass(string p)
{
    try
    {
        chef C;
        int f = 0, size = p.size();
        ifstream is("chef.dat", ios::binary);
        is.seekg(0);
        bool empty = (is.get(), is.eof());
        if (empty == false)
        {
            is.seekg(0);
            while (!is.eof())
            {
                is.read((char*)&C, sizeof(C));
                if (C.getPass() == p.c_str())
                {
                    f = 1;
                    break;
                }
            }
        }
        if (f == 0)
        {
            if (size >= 8)
            {
                strcpy(Staff_Password, p.c_str());
                return true;
            }
            else
            {
                throw(1);
            }
        }
        else if (f == 0);
        {

            throw(1);
        }
        is.close();
    }
    catch (...)
    {
        strcpy(Staff_Password, "");
        return false;
    }
}
bool chef::addworkingorder()
{
    int pos, flag = 0;
    fstream fs;
    fs.open("Orders.dat", ios::in | ios::binary | ios::out);
    fs.seekg(0);
    while (!fs.eof())
    {
        pos = fs.tellg();
        fs.read((char*)&Chefs_Order, sizeof(Chefs_Order));
        if (Chefs_Order.getstatus() == confirmed);
        {
            flag = 1;
            Working_Order_Code = Chefs_Order.getOrderCode();
            Chefs_Order.setstatus(making);
            fs.seekp(pos);
            fs.write((char*)&Chefs_Order, sizeof(Chefs_Order));
            break;
        }
    }
    fs.close();
    if (flag == 1) return true;
    else return false;
}

long int chef::getworkingorder()
{
    return Working_Order_Code;
}

bool chef::setorderready()
{
    int pos, flag = 0;
    fstream fs;
    fs.open("Orders.dat", ios::in | ios::binary | ios::out);
    fs.seekg(0);
    while (!fs.eof())
    {
        pos = fs.tellg();
        fs.read((char*)&Chefs_Order, sizeof(Chefs_Order));
        if (Chefs_Order.getOrderCode() == Working_Order_Code)
        {
            flag = 1;
            Chefs_Order.setstatus(ready_for_delivery);
            Working_Order_Code = 0;
            fs.seekp(pos);
            fs.write((char*)&Chefs_Order, sizeof(Chefs_Order));
            increaseTotalOrders();
            break;
        }
    }
    fs.close();
    if (flag == 1) return true;
    else return false;
}
bool chef::check(string id, string p)
{
    int flag = 0;
    ifstream is("chef.dat", ios::binary);
    is.seekg(0);
    while (!is.eof())
    {
        is.read((char*)this, sizeof(this));
        if (this->getID() == id && this->getPass() == p)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1) return true;
    else return false;
}

void chef::increaseTotalOrders()
{
    chef temp;
    int pos;
    fstream fs;
    fs.open("chef.dat", ios::in | ios::binary | ios::out);
    fs.seekg(0);
    while (!fs.eof())
    {
        pos = fs.tellg();
        fs.read((char*)&temp, sizeof(temp));
        if (temp.getID() == Staff_ID)
        {
            temp.Total_Orders++;
            fs.seekp(pos);
            fs.write((char*)&temp, sizeof(temp));
            break;
        }
    }
}
bool chef::cancelorder()
{
    int pos, flag = 0;
    fstream fs;
    fs.open("Orders.dat", ios::in | ios::binary | ios::out);
    fs.seekg(0);
    while (!fs.eof())
    {
        pos = fs.tellg();
        fs.read((char*)&Chefs_Order, sizeof(Chefs_Order));
        if (Chefs_Order.getOrderCode() == Working_Order_Code)
        {
            flag = 1;
            Chefs_Order.setstatus(canceled);
            fs.seekp(pos);
            fs.write((char*)&Chefs_Order, sizeof(Chefs_Order));
            break;
        }
    }
    if (flag == 1) return true;
    else return false;
}
int chef::getTotalOrders()
{
    return Total_Orders;
}