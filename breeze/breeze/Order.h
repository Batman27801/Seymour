#pragma once
#include<string>
#include"Header.h"
class Order
{
private:
    double bill;
    int no_of_orders;
    double small = 200, medium = 400, large = 600;
    string FLAVOURS[7];
    string CRUSTS[8];
public:
    Order();
    void TakeOrder(flavour *flav,int index);
    double ReturnBill();
};

