#ifndef MANAGER
#define MANAGER
#include "Staff.h"
#include "Delivery_Boy.h"
#include "Chef.h"
class Manager : public Staff
{
public:
    Manager(int);
    bool setID(string)  ;
    bool setPass(string)  ;
    void addDeliveryBoy(Delivery_Boy) const ;
    void addchef(chef) const ;
    double gettotalsales() const ;
    bool check(string,string) const ;
    bool updatesaleryofchef(string,double) const ;
    bool updatesaleryofDB(string,double) const ;
    int TotalOrders_Chef(string) const ;
    int TotalOrders_DelvieryBoy(string) const ;
    bool DeleteChef(string) const ;
    bool DeleteDeliveryBoy(string) const ;
} const ;
#endif