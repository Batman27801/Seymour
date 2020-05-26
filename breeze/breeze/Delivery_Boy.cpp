#include "Person.h"
#include "Staaf.h"
#include "Delivery_Boy.h"
#include <fstream>
#include <string.h>
Delivery_Boy::Delivery_Boy() : On_Delivery(false), Bike_Petrol_Allowance(1000) 
{
    WorkingOrder = 0;
}

void Delivery_Boy::setOn_Delivery(bool OD)
{
    On_Delivery = OD;
}

bool Delivery_Boy::getOn_Delivery()
{
    return On_Delivery;
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
                strcpy(Staaf_ID, id.c_str());
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
        strcpy(Staaf_ID, "");
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
                strcpy(Staaf_Password, p.c_str());
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
        strcpy(Staaf_Password, "");
        return false;
    }
}
void Delivery_Boy::setBikePetrolAllowance(double BPA)
{
    Bike_Petrol_Allowance = BPA;
}
double Delivery_Boy::getBikePetrolAllowance()
{
    return Bike_Petrol_Allowance;
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
        fs.read((char*)&O, sizeof(O));
        if (O.getstatus() == ready_for_delivery)
        {
            WorkingOrder = O.getOrderCode();
            flag = 1;
            O.setstatus(delivering);
            fs.seekp(pos);
            fs.write((char*)&O, sizeof(O));
            break;
        }
    }
    fs.close();
    if (flag == 1) return true;
    else if (flag == 0) return false;
}
bool Delivery_Boy::setorderdelivered()
{
    int pos, flag = 0;
    fstream fs;
    fs.open("Orders.dat", ios::in | ios::binary | ios::out);
    fs.seekg(0);
    while (!fs.eof())
    {
        pos = fs.tellg();
        fs.read((char*)&O, sizeof(O));
        if (O.getOrderCode() == WorkingOrder)
        {
            flag = 1;
            O.setstatus(delivered);
            fs.seekp(pos);
            fs.write((char*)&O, sizeof(O));
            break;
        }
    }
    fs.close();
    if (flag == 1) return true;
    else if (flag == 0) return false;
}