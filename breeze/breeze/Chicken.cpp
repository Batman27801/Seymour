#include "Toping.h"
#include "Chicken.h"
#include <iostream>
#include <string.h>
using namespace std;
Chicken::Chicken(): Cheese(Shredded_Cheddar),BBQ_Sause(false) 
{
    strcpy_s(name, "Chicken");
    price = 170.5;
    strcpy_s(details, "The winner of weeknight meals goes well on pizzas, any type of chicken pizza has that kind of protien in it. ");
}

void Chicken::setCheese(Cheeses C)
{
    Cheese = C;
}
Cheeses Chicken::getCheese()
{
    return Cheese;
}
void Chicken::setBS(bool n)
{
    BBQ_Sause = n;
}
bool Chicken::getBS()
{
    return BBQ_Sause;
}
double Chicken::getprice()
{
    if (BBQ_Sause == true)
    {
        return (price + 50);
    }
    else return price;
}