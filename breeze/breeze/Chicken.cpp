#include "Toping.h"
#include "Chicken.h"
#include <iostream>
using namespace std;
Chicken::Chicken() : price(170.5), details("The winner winner of weeknight meals goes well on pizzas, too! BBQ chicken, buffalo chicken, and chicken bacon ranch are common pizza orders that contain this protein.") {}
Chicken::~Chicken()
{
    cout << endl;
}
void Chicken::setprice(float p)
{
    price = p;
}
float Chicken::getprice()
{
    return price;
}
string Chicken::getdetails()
{
    return details;
}
void Chicken::setdetails(string I)
{
    details = I;
}
void Chicken::setCheese(int n)
{
    if (n == 1)
    {
        Cheese = Shredded_Parmesan;
    }
    else if (n == 2)
    {
        Cheese = Shredded_Cheddar;
    }
}
int Chicken::getCheese()
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