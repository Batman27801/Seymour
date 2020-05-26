#ifndef DELIVERY_BOY
#define DELIVERY_BOY
#include "Person.h"
#include "Staaf.h"
#include "Order.h"
class Delivery_Boy : public Staaf
{
    bool On_Delivery;
    double Bike_Petrol_Allowance;
    long int WorkingOrder;
public:
    Order O;
    Delivery_Boy();
    bool setID(string);
    bool setPass(string);
    void setOn_Delivery(bool);
    bool getOn_Delivery();
    void setBikePetrolAllowance(double);
    double getBikePetrolAllowance();
    bool  addworkingorder();
    long int getworkingorder();
    bool setorderdelivered();
};
#endif