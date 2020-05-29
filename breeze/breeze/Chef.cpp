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
        else if (f != 0);
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
    int n = 0, flag1 = 0, flag2 = 0;
    ifstream is("Orders.dat", ios::binary);
    ofstream os("temp.dat", ios::binary);
    is.seekg(0);

    //pos = (int)fs.tellg();
    while (is.read((char*)&Chefs_Order, sizeof(Chefs_Order)))
    {
        if (Chefs_Order.getstatus() == confirmed && n==0)
        {
            flag1 = 1;
            n++;
            Working_Order_Code = Chefs_Order.getOrderCode();
            Chefs_Order.setstatus(making);
            flag2 = updatechef();
            os.write((char*)&Chefs_Order, sizeof(Chefs_Order));
        }
        else
        {
            os.write((char*)&Chefs_Order, sizeof(Chefs_Order));
        }
        //pos = (int)fs.tellg();
    }
    is.close();
    os.close();
    remove("Orders.dat");
    rename("temp.dat", "Orders.dat");
    
    if (flag1 == 1 && flag2==1) return true;
    else return false;
}

long int chef::getworkingorder()
{
    return Working_Order_Code;
}

bool chef::setorderready()
{
    int n = 0, flag1 = 0, flag2 = 0;
    ifstream is("Orders.dat", ios::binary);
    ofstream os("temp.dat", ios::binary);
    is.seekg(0);

    while (is.read((char*)&Chefs_Order, sizeof(Chefs_Order)))
    {        
        if (Chefs_Order.getOrderCode() == Working_Order_Code && n==0)
        {
            flag1 = 1;
            n++;
            Chefs_Order.setstatus(ready_for_delivery);
            Total_Orders++;
            Working_Order_Code = 0;
            flag2 = updatechef();
            os.write((char*)&Chefs_Order, sizeof(Chefs_Order));
        }
        else
        {
            os.write((char*)&Chefs_Order, sizeof(Chefs_Order));
        }
    }
    is.close();
    os.close();
    remove("Orders.dat");
    rename("temp.dat", "Orders.dat");
    if (flag1 == 1 && flag2 == 1) return true;
    else return false;
}
bool chef::check(string id, string p)
{
    int flag = 0;
    ifstream is("chef.dat", ios::binary);
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
bool chef::cancelorder()
{
    int flag1 = 0,flag2=0;
    ifstream is("Orders.dat", ios::binary);
    ofstream os("temp.dat", ios::binary);
    is.seekg(0);

    while (is.read((char*)&Chefs_Order, sizeof(Chefs_Order)))
    {
        if (Chefs_Order.getOrderCode() == Working_Order_Code)
        {
            flag1 = 1;
            Chefs_Order.setstatus(canceled);
            Working_Order_Code = 0;
            flag2 = updatechef();
            os.write((char*)&Chefs_Order, sizeof(Chefs_Order));
        }
        else
        {
            os.write((char*)&Chefs_Order, sizeof(Chefs_Order));
        }
    }
    is.close();
    os.close();
    remove("Orders.dat");
    rename("temp.dat", "Orders.dat");
    if (flag1 == 1 && flag2==1) return true;
    else return false;
}
int chef::getTotalOrders()
{
    return Total_Orders;
}
Order chef::getcurrOrder()
{
    return Chefs_Order;
}
bool chef::updatechef()
{
    int flag = 0;
    chef temp;
    ifstream cheff("chef.dat", ios::binary);
    ofstream outfile("temp.dat", ios::binary);
    cheff.seekg(0);
    while (cheff.read((char*)&temp, sizeof(temp)))
    {
        if (strcmp(Staff_ID, temp.getID()) == 0)
        {
            flag = 1;
            outfile.write((char*)this, sizeof(*this));
            break;
        }
        else
        {
            outfile.write((char*)&temp, sizeof(temp));
        }
    }
    cheff.close();
    outfile.close();
    remove("chef.dat");
    rename("temp.dat", "chef.dat");
    if (flag == 1) return true;
    else return false;
}