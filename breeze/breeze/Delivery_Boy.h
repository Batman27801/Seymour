#ifndef DELIVERY_BOY
#define DELIVERY_BOY
#include "Person.h"
#include "Staff.h"
#include "Order.h"
class Delivery_Boy : public Staff
{
    int Total_Orders;
    long int Working_Order_Code;
    void increaseTotalOrders();
public:
    Order Delivery_Order;
    Delivery_Boy();
    bool setID(string);
    bool setPass(string);
    bool check(string, string);
    bool  addworkingorder();
    long int getworkingorder();
    bool deleteorder();
    int getTotalOrders();
};
#endif