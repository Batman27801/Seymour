#include "Toping.h"
#include "Pepperoni.h"
#include <iostream>
using namespace std;
Pepperoni::Pepperoni(): Type(Vegan),QOFMC(Usual)
{
    initialize();
}
Pepperoni::~Pepperoni()
{
    cout << endl;
}
void Pepperoni::initialize()
{
    details = "Poll after poll, pepperoni always tops the list of Americas favorite pizza toppings. When it doubt, you cant go wrong with a classic.";
    price = 150;
}
void Pepperoni::setType(TypeofTopping TOT)
{
    Type = TOT;
}
TypeofTopping Pepperoni::getType()
{
    return Type;
}
void Pepperoni::setQOFMC(QuantityOfmozzarellecheese Q)
{
    QOFMC = Q;
}
QuantityOfmozzarellecheese Pepperoni::getQOFMC()
{
    return QOFMC;
}
