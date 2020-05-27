#ifndef DELIVERY_BOY
#define DELIVERY_BOY
#include "Person.h"
#include "Staaf.h"
#include "Order.h"
class Delivery_Boy : public Staaf
{
    int Total_Orders;
    long int Working_Order_Code;
    void increaseTotalOrders();
public:
    Order Delivery_Order;
    Delivery_Boy();
    bool setID(string);
    bool setPass(string);
    bool  addworkingorder();
    long int getworkingorder();
    bool deleteorder();
    bool check(string, string);
    int getTotalOrders();
};
#endif