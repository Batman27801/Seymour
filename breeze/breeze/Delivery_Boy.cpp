#include "Person.h"
#include "Staaf.h"
#include "Delivery_Boy.h"
#include <fstream>
#include <string.h>
Delivery_Boy::Delivery_Boy() : On_Delivery(false), Bike_Petrol_Allowance(1000) {}

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