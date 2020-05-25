#include "Staaf.h"
#include "Manager.h"
#include <string.h>
#include <fstream>
#include "account.h"
Manager::Manager() : Mobile_Balance_Allowance(1000), Car_Fuel_Allowance(2000)
{
    salary = 50000;
    strcpy(Staaf_Password, "FASTNUCES");
    DB = new Delivery_Boy;
    C = new chef;
}

Manager::~Manager()
{
    delete DB;
    delete C;
}

void Manager::setMob_Bal_All(double MBA)
{
    Mobile_Balance_Allowance = MBA;
}

void Manager::setCar_Fuel_All(double CFA)
{
    Car_Fuel_Allowance = CFA;
}

double Manager::getCar_Fuel_All()
{
    return Car_Fuel_Allowance;
}

double Manager::getMob_Bal_All()
{
    return Mobile_Balance_Allowance;
}

bool Manager::setID(string id)
{
    strcpy(Staaf_ID, "M_1234");
    return true;
}

bool Manager::setPass(string P)
{
    if (P.size() >= 8)
    {
        strcpy(Staaf_Password, P.c_str());
        return true;
    }
    else return false;
}

void Manager::addDeliveryBoy()
{
    ofstream os("Delivery_Boy.dat", ios::binary | ios::app);
    os.write((char*)DB, sizeof(DB));
    os.close();
}

void Manager::addchef()
{
    ofstream os("chef.dat", ios::binary | ios::app);
    os.write((char*)C, sizeof(C));
    os.close();
}

double Manager::gettotalsales()
{
    totalsales = 0;
    account temp;
    ifstream is("account.dat", ios::binary);
    while (is.read((char*)&temp, sizeof(temp)))
    {
        totalsales = totalsales + temp.gettotalamount();
    }
    is.close();
    return totalsales;
}
bool Manager::check(string id, string p)
{
    if (p==Staaf_Password && id==Staaf_ID)
        return true;
    else if(p!=Staaf_Password || id!=Staaf_ID)
        return false;
}