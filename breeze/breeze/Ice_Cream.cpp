#include "Add_On.h"
#include "Ice_Cream.h"

Ice_Cream::Ice_Cream() : IF(Vanilla), Dry_Fruit_Topping(Vanilla)
{
    price = 140;
}

Ice_Cream::~Ice_Cream()
{
    cout << endl;
}

void Ice_Cream::setprice(double p)
{
    price = p;
}

double Ice_Cream::getprice()
{
    return price;
}

void Ice_Cream::setIF(IC_flavors If)
{
    IF = If;
}

IC_flavors Ice_Cream::getIF()
{
    return IF;
}

void Ice_Cream::setDFT(bool dft)
{
    Dry_Fruit_Topping = dft;
}

bool Ice_Cream::getDFT()
{
    return Dry_Fruit_Topping;
}