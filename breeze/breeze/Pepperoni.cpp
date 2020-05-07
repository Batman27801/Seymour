#include "Toping.h"
#include "Pepperoni.h"
#include <iostream>
using namespace std;
Pepperoni::Pepperoni() : price(150), details("Poll after poll, pepperoni always tops the list of Americas favorite pizza toppings. When it doubt, you cant go wrong with a classic.") {}
Pepperoni::~Pepperoni()
{
    cout << endl;
}
void Pepperoni::setprice(float p)
{
    price = p;
}
float Pepperoni::getprice()
{
    return price;
}
string Pepperoni::getdetails()
{
    return details;
}
void Pepperoni::setdetails(string I)
{
    details = I;
}
void Pepperoni::setType(TypeofTopping TOT)
{
    Type = TOT;
}
TypeofTopping Pepperoni::getType()
{
    return Type;
}
void Pepperoni::setQOFMC(int n)
{
    if (n == 1)
    {
        QOFMC = Usual;
    }
    else if (n == 2)
    {
        QOFMC = More;
    }
    else if (n == 3)
    {
        QOFMC = Little;
    }
    else if (n == 4)
    {
        QOFMC = Not_Include;
    }
}
int Pepperoni::getQOFMC()
{
    return QOFMC;
}
