#include "Staff.h"
#include "Manager.h"
#include <string.h>
#include <fstream>
#include "account.h"
Manager::Manager(int a):Staff(a)
{
}


bool Manager::setID(string id)  { return true; }

bool Manager::setPass(string P)  
{
    return true;
}

void Manager::addDeliveryBoy(Delivery_Boy DB) const
{
    ofstream os("Delivery_Boy.dat", ios::binary | ios::app);
    os.write((char*)&DB, sizeof(DB));
    os.close();
}

void Manager::addchef(chef C) const
{

    ofstream os("chef.dat", ios::binary | ios::app);
    if (os.is_open())
    {
        os.write((char*)&C, sizeof(C));
        os.close();
    }
    else
    {
        os.open("chef.dat", ios::out | ios::binary);
        os.write((char*)&C, sizeof(C));
        os.close();
    }
}

double Manager::gettotalsales() const 
{
    int totalsales = 0;
    account temp;
    ifstream is("account.dat", ios::binary);
    while (is.read((char*)&temp, sizeof(temp)))
    {
        totalsales = totalsales + temp.gettotalamount();
    }
    is.close();
    return totalsales;
}
bool Manager::check(string, string)
{
    return false;
}

bool Manager::check(string id, string p) const
{
    if (p!=Staff_Password || id!=Staff_ID)
        return false;
    else if(p==Staff_Password && id==Staff_ID)
        return true;
}
bool Manager::updatesaleryofchef(string id,double s) const
{
    int pos,flag=0;
    chef temp;
    fstream fs("chef.dat", ios::in|ios::binary|ios::out);
    fs.seekg(0);
    while (!fs.eof())
    {
        pos = fs.tellg();
        fs.read((char*)&temp, sizeof(temp));
        if (temp.getID() == id)
        {
            flag = 1;
            temp.setsalary(s);
            fs.seekp(pos);
            fs.write((char*)&temp, sizeof(temp));
            break;
        }
    }
    fs.close();
    if (flag == 1) return true;
    else if(flag == 0) return false;
}
bool Manager::updatesaleryofDB(string id, double s) const
{
    int pos, flag=0;
    Delivery_Boy temp;
    fstream fs;
    fs.open("Delivery_Boy.dat", ios::in | ios::binary | ios::out);
    fs.seekg(0);
    while (!fs.eof())
    {
        pos = fs.tellg();
        fs.read((char*)&temp, sizeof(temp));
        if (temp.getID() == id)
        {
            temp.setsalary(s);
            fs.seekp(pos);
            fs.write((char*)&temp, sizeof(temp));
            break;
        }
    }
    fs.close();
    if (flag == 1) return true;
    else if (flag == 0) return false;
}
int Manager::TotalOrders_Chef(string id) const
{
    chef C;
    int Total_Orders=0;
    ifstream is("chef.dat", ios::binary);
    is.seekg(0);
    while (!is.eof())
    {
        is.read((char*)&C, sizeof(C));
        if (C.getID() == id)
        {
            Total_Orders = C.getTotalOrders();
        }
    }
    return Total_Orders;
}
int Manager::TotalOrders_DelvieryBoy(string id)const
{
    Delivery_Boy DB;
    int Total_Orders=0;
    ifstream is("Delivery_Boy.dat", ios::binary);
    is.seekg(0);
    while (!is.eof())
    {
        is.read((char*)&DB, sizeof(DB));
        if (DB.getID() == id)
        {
            Total_Orders = DB.getTotalOrders();
        }
    }
    return Total_Orders;
}
bool Manager::DeleteChef(string id)const
{
    chef temp;
    int flag = 0;
    ifstream is("chef.dat", ios::binary);
    ofstream os("temp.dat", ios::out);
    os.close();
    os.open("temp.dat", ios::binary | ios::app);
    is.seekg(0);
    while (!is.eof())
    {
        is.read((char*)&temp, sizeof(temp));
        if (temp.getID() == id)
        {
            flag = 1;
            continue;
        }
        else
        {
            os.write((char*)&temp, sizeof(temp));
        }
    }
    remove("chef.dat");
    rename("temp.dat", "chef.dat");
    if (flag == 1) return true;
    else return false;
}
bool Manager::DeleteDeliveryBoy(string id)const
{
    Delivery_Boy temp;
    int flag = 0;
    ifstream is("Delivery_Boy.dat", ios::binary);
    ofstream os("temp.dat", ios::out);
    is.seekg(0);
    while (!is.eof())
    {
        is.read((char*)&temp, sizeof(temp));
        if (temp.getID() == id)
        {
            flag = 1;
            continue;
        }
        else
        {
            os.write((char*)&temp, sizeof(temp));
        }
    }
    is.close();
    os.close();
    remove("Delivery_Boy.dat");
    rename("temp.dat", "Delivery_Boy.dat");
    if (flag == 1) return true;
    else return false;
}

