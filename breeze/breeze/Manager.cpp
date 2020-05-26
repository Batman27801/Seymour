#include "Staaf.h"
#include "Manager.h"
#include <string.h>
#include <fstream>
#include "account.h"
Manager::Manager() : Mobile_Balance_Allowance(1000), Car_Fuel_Allowance(2000)
{
    salary = 50000;
    char temp[20] = "FASTNUCES";
    strcpy(Staaf_Password, temp);
    char temp1[20] = "M_1234";
    strcpy(Staaf_ID, temp1);
    salary = 70000;
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
    if (p!=Staaf_Password && id!=Staaf_ID)
        return false;
    else if(p==Staaf_Password || id==Staaf_ID)
        return true;
}
bool Manager::updatesaleryofchef(string id,double s)
{
    int pos,flag=0;
    chef temp;
    fstream fs("chef.dat", ios::in|ios::binary|ios::out);
    fs.seekg(0);
    while (!fs.eof())
    {
        pos = fs.tellg();
        fs.read((char*)&temp, sizeof(temp));
        if (temp.getID() == id.c_str())
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
bool Manager::updatesaleryofDB(string id, double s)
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
        if (temp.getID() == id.c_str())
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
