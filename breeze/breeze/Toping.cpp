#include "Toping.h"
#include <iostream>
#include <string.h>
using namespace std;
Toping::Toping(): quantity(Normal){}

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
    strcpy_s(details,I.c_str());
}
string Toping::getToppingName()
{
    return name;
}

