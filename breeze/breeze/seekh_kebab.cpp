#include "seekh_kebab.h"
#include<iostream>
bool seekh_kebab::gluten = true;
int seekh_kebab::count = 0;
seekh_kebab::seekh_kebab()
{
    price = 1400;
    description = new char[230];
    description = "Topped with seekh kabab chunks on tantalizing blend of spicy chicken, onions capsicum, green pepper and cheese. Contains gluten in significant amounts";
    chicken = true;
    beef = true;
    count++;
}
bool seekh_kebab::get_gluten()
{
    return gluten;
}
double seekh_kebab::get_price()
{
    return price;
}
double seekh_kebab::set_price(double PRICE)
{
    price=PRICE;
    return  0;
}
char* seekh_kebab::get_description()
{
    return description;
}
char* seekh_kebab::set_description(char *desc)
{
    description = desc;
    return  0;
}
seekh_kebab::~seekh_kebab()
{
    delete[] description;
}
bool seekh_kebab::get_beef()
{
    return beef;
}
bool seekh_kebab::get_chicken()
{
    return chicken;
}
void seekh_kebab::set_beef(bool B)
{
    beef = B;
}
void seekh_kebab::set_chicken(bool B)
{
    chicken = B;
}