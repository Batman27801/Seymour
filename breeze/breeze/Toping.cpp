#include "Toping.h"
#include <iostream>
using namespace std;
Toping::~Toping()
{
    cout << endl;
}
Toping::Toping() : quantity(Normal) {}
void Toping::setquantity(quantityoftopings Q)
{
    quantity = Q;
}

quantityoftopings Toping::getquantity()
{
    return quantity;
}

