#include "Toping.h"
#include "Chicken.h"
#include <iostream>
#include <string.h>
using namespace std;
Chicken::Chicken(): Cheese(Shredded_Cheddar),BBQ_Sause(true) 
{
    strcpy_s(name, "Chicken");
    initialize();
}
void Chicken::initialize()
{
    price = 170.5;
    strcpy_s(details, "The winner winner of weeknight meals goes well on pizzas, too! BBQ chicken, buffalo chicken, and chicken bacon ranch are common pizza orders that contain this protein.");
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