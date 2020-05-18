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

char* Toping::getdetails()
{
    return details;
}

void Toping::setdetails(char I[])
{
    strcpy_s(details,I);
}
char* Toping::getToppingName()
{
    return name;
}

