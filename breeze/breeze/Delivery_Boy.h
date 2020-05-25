#ifndef DELIVERY_BOY
#define DELIVERY_BOY
#include "Person.h"
#include "Staaf.h"

class Delivery_Boy : public Staaf
{
    bool On_Delivery;
    double Bike_Petrol_Allowance;
    long int WorkingOrder;
public:
    Delivery_Boy();
    bool setID(string);
    bool setPass(string);
    void setOn_Delivery(bool);
    bool getOn_Delivery();
    void setBikePetrolAllowance(double);
    double getBikePetrolAllowance();
    void setworkingorder(long int);
    long int getworkingorder();
};
#endif