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
    char FLAVOURS[7][300] = { "tikka" ,"fajita","chilli delight", "BBQ buzz", "seekh kebab", "The cheese", "Veggie Delight" };
    char SelectedFlavour[300];
    char SelectedFlavourMisc[300];
    char CRUSTS[8][300];
    char SelectedCrust[300];
    char SelectedCrustMisc[300];
    char TOPPINGS[5][300];
    char SelectedTopping[300];
    
public:
    Order();
    void PlaceOrder(pizza *pizza);
    void FileOrder();
    //double MiscCal(double AddOn_Price,flavour *ptr);
    double ReturnBill();
};

