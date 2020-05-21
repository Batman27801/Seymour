#pragma once
#include<string.h>
#include "crust.h"
#include "flavours.h"
#include "Toping.h"
#include"pizza.h"
enum status{confirmed,waiting,making,delivering,delivered};
class Order
{
private:
    double bill;
    long int OrderCode;
    char FLAVOURS[5][30];
    char CRUSTS[5][30];
    char TOPPINGS[5][30];    
    enum status orderstatus;
public:
    Order();
    void PlaceOrder(pizza *pizza,int pizzaamount);
    void FileOrder();
    void operator =(const Order& obj);
    void operator -(const double DiscAmount);
    void setOrderCode(long int OrderCode);
    void setstatus(enum status);
    enum status getstatus();
    double ReturnBill();
};

