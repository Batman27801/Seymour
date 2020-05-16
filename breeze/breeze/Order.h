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
    char FLAVOURS[7][30] = { "tikka" ,"fajita","chilli delight", "BBQ buzz", "seekh kebab", "The cheese", "Veggie Delight" };
    char SelectedFlavour[30];
    char SelectedFlavourMisc[30];
    char CRUSTS[8][30];
    char SelectedCrust[30];
    char SelectedCrustMisc[30];
    
public:
    Order();
    void PlaceOrder(pizza *pizza);
    void FileOrder();
    //double MiscCal(double AddOn_Price,flavour *ptr);
    double ReturnBill();
};

