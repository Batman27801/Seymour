#ifndef MANAGER
#define MANAGER
#include "Staff.h"
#include "Delivery_Boy.h"
#include "Chef.h"
class Manager : public Staff
{
    double totalsales;

public:
    Manager();
    bool setID(string);
    bool setPass(string);
    void addDeliveryBoy(Delivery_Boy);
    void addchef(chef);
    double gettotalsales();
    bool check(string,string);
    bool updatesaleryofchef(string,double);
    bool updatesaleryofDB(string,double);
    int TotalOrders_Chef(string);
    int TotalOrders_DelvieryBoy(string);
    bool DeleteChef(string);
    bool DeleteDeliveryBoy(string);
};
#endif