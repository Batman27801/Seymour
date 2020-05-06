#include "Add_On.h"
#include "Shakes.h"

Shakes::Shakes() : SF(Banana), sugar(1)
{
    price = 70;
}

Shakes::~Shakes()
{
    cout << endl;
}

void Shakes::setprice(double p)
{
    price = p;
}
double Shakes::getprice()
{
    return price;
}
void Shakes::setSF(shakeflavors sf)
{
    SF = sf;
}
shakeflavors Shakes::getSF()
{
    return SF;
}
void Shakes::setsugar(bool s)
{
    sugar = s;
}
bool Shakes::getsugar()
{
    return sugar;
}