#pragma once
#include<string.h>
#include "crust.h"
#include "flavours.h"
#include "Toping.h"
#include"pizza.h"
class Order
{
private:
    double bill;
    int no_of_orders;
    double small = 200, medium = 400, large = 600;
    char FLAVOURS[7][230] = { "tikka" ,"fajita","chilli delight", "BBQ buzz", "seekh kebab", "The cheese", "Veggie Delight" };
        
    
public:
    Order();
    void PlaceOrder(pizza *pizza);
    //double MiscCal(double AddOn_Price,flavour *ptr);
    double ReturnBill();
};

