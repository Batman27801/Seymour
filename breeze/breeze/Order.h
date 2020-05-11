#pragma once
#include<string>
#include "crust.h"
#include "flavours.h"
#include "Toping.h"
class Order
{
private:
    double bill;
    int no_of_orders;
    double small = 200, medium = 400, large = 600;
    string FLAVOURS[7];
    string CRUSTS[8];
    string ADDONS[5];
public:
    Order();
    void TakeOrder(flavour *flav);
    double MiscCal(double AddOn_Price,flavour *ptr);
    double ReturnBill();
};

