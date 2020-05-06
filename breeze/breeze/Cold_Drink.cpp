#include "Add_On.h"
#include "Cold_Drink.h"

Cold_Drink::Cold_Drink() : diet(0), Brand(Sting)
{
    price = 60;
}
Cold_Drink::~Cold_Drink()
{
    cout << endl;
}
void Cold_Drink::setprice(double p)
{
    price = p;
}
double Cold_Drink::getprice()
{
    return price;
}
void Cold_Drink::setdiet(bool d)
{
    diet = d;
}
bool Cold_Drink::getdiet()
{
    return diet;
}
void Cold_Drink::setBrand(Brands B)
{
    Brand = B;
}
Brands Cold_Drink::getBrand()
{
    return Brand;
}