#include "Person.h"
#include "Staff.h"
#include "Delivery_Boy.h"
#include <fstream>
#include <string.h>
Delivery_Boy::Delivery_Boy()
{
    Total_Orders = 0;
    Working_Order_Code = 0;
}

bool Delivery_Boy::setID(string id)
{
    try
    {
        Delivery_Boy DB;
        int f = 0, comp;
        ifstream is("Delivery_Boy.dat", ios::binary);
        is.seekg(0);
        bool empty = (is.get(), is.eof());
        if (empty != 1)
        {
            is.seekg(0);
            while (!is.eof())
            {
                is.read((char*)&DB, sizeof(DB));
                if (DB.getID() == id)
                {
                    f = 1;
                    break;
                }
                else continue;
            }
        }
        if (f == 0)
        {
            if (id[0] == 'D' && id[1] == '_')
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
        strcpy_s(Staff_ID, "");
        return false;
    }
}
bool Delivery_Boy::setPass(string p)
{

    try
    {
        Delivery_Boy DB;
        int f = 0, size = p.size();
        ifstream is("Delivery_Boy.dat", ios::binary);
        is.seekg(0);
        bool empty = (is.get(), is.eof());
        if (empty == false)
        {
            is.seekg(0);
            while (!is.eof())
            {
                is.read((char*)&DB, sizeof(DB));
                if (DB.getPass() == p.c_str())
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
                strcpy_s(Staff_Password, p.c_str());
                return true;
            }
            else
            {
                throw(1);
            }
        }
        else if (f != 0);
        {

            throw(1);
        }
        is.close();
    }
    catch (...)
    {
        strcpy_s(Staff_Password, "");
        return false;
    }
}

bool Delivery_Boy::addworkingorder()
{
    int pos, flag = 0;
    fstream fs;
    fs.open("Orders.dat", ios::in | ios::binary | ios::out);
    fs.seekg(0);
    while (!fs.eof())
    {
        pos = fs.tellg();
        fs.read((char*)&Delivery_Order, sizeof(Delivery_Order));
        if (Delivery_Order.getstatus() == ready_for_delivery)
        {
            Working_Order_Code = Delivery_Order.getOrderCode();
            flag = 1;
            Delivery_Order.setstatus(delivering);
            fs.seekp(pos);
            fs.write((char*)&Delivery_Order, sizeof(Delivery_Order));
            break;
        }
    }
    fs.close();
    if (flag == 1) return true;
    else return false;
}
bool Delivery_Boy::deleteorder()
{
    int flag = 0;
    ifstream is("Orders.dat", ios::binary);
    ofstream os("temp.dat", ios::out);
    os.close();
    is.seekg(0);
    while (is.read((char*)&Delivery_Order, sizeof(Delivery_Order)))
    {
        if (Delivery_Order.getOrderCode() == Working_Order_Code)
        {
            flag = 1;
            increaseTotalOrders();
            continue;
        }
        else
        {
            os.write((char*)&Delivery_Order, sizeof(Delivery_Order));
        }
    }
    is.close();
    os.close();
    remove("Orders.dat");
    rename("temp.dat", "Orders.dat");
    if (flag == 1) return true;
    else return false;
}
long int Delivery_Boy::getworkingorder()
{
    return Working_Order_Code;
}
bool Delivery_Boy::check(string id, string p)
{
    int flag = 0;
    ifstream is("Delivery_Boy.dat", ios::binary);
    is.seekg(0);
    while (!is.eof())
    {
        is.read((char*)this, sizeof(*this));
        if (this->getID() == id && this->getPass() == p)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1) return true;
    else return false;
}
void Delivery_Boy::increaseTotalOrders()
{
    Delivery_Boy temp;
    int pos;
    fstream fs;
    fs.open("Delivery_Boy.dat", ios::in | ios::binary | ios::out);
    fs.seekg(0);
    while (!fs.eof())
    {
        pos = fs.tellg();
        fs.read((char*)&temp, sizeof(temp));
        if (temp.getID() == this->Staff_ID)
        {
            temp.Total_Orders++;
            fs.seekp(pos);
            fs.write((char*)&temp, sizeof(temp));
            break;
        }
    }
}
int Delivery_Boy::getTotalOrders()
{
    return Total_Orders;
}