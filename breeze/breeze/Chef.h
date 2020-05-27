#ifndef CHEF
#define CHEF
#include "Staaf.h"
#include "Order.h"
class chef : public Staaf
{
    int Total_Orders;
    long int Working_Order_Code;
    void increaseTotalOrders();
public:
    Order Chefs_Order;
    chef();
    bool setID(string);
    bool setPass(string);
    bool addworkingorder();
    long int getworkingorder();
    bool setorderready();
    bool check(string, string);
    bool cancelorder();
    int getTotalOrders();
};
#endif