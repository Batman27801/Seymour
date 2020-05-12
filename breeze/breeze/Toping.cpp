#include "Toping.h"
#include <iostream>
using namespace std;
Toping::Toping(): quantity(Normal){}
Toping::~Toping()
{
    cout << endl;
}
void Toping::setquantity(quantityoftopings Q)
{
    quantity = Q;
}

quantityoftopings Toping::getquantity()
{
    return quantity;
}

void Toping::setprice(double p)
{
    price = p;
}
double Toping::getprice()
{
    return price;
}

string Toping::getdetails()
{
    return details;
}

void Toping::setdetails(string I)
{
    details = I;
}

