#ifndef CHEF
#define CHEF
#include "Staff.h"
#include "Order.h"
class chef : public Staff
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