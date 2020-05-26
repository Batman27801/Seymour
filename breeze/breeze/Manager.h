#ifndef MANAGER
#define MANAGER
#include "Staaf.h"
#include "Delivery_Boy.h"
#include "Chef.h"
class Manager : public Staaf
{
    double Mobile_Balance_Allowance;
    double Car_Fuel_Allowance;
    double totalsales;

public:
    Delivery_Boy* DB;
    chef* C;
    Manager();
    ~Manager();
    void setMob_Bal_All(double);
    void setCar_Fuel_All(double);
    double getMob_Bal_All();
    double getCar_Fuel_All();
    bool setID(string);
    bool setPass(string);
    void addDeliveryBoy();
    void addchef();
    double gettotalsales();
    bool check(string,string);
    bool updatesaleryofchef(string,double);
    bool updatesaleryofDB(string,double);
};
#endif