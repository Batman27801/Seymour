#include "Add_On.h"
#include "Pastry.h"

Pastry::Pastry() : flavor(Chocolate), sugar(White)
{
    price = 120;
}

Pastry::~Pastry()
{
    cout << endl;
}

void Pastry::setprice(double p)
{
    price = p;
}

double Pastry::getprice()
{
    return price;
}

void Pastry::setflavor(flavors f)
{
    flavor = f;
}

flavors Pastry::getflavor()
{
    return flavor;
}
void Pastry::setsugar(Sugar s)
{
    sugar = s;
}

Sugar Pastry::getsugar()
{
    return sugar;
}