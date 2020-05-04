#include "tikka.h"
#include<iostream>
bool tikka::gluten = false;
int tikka::count = 0;
tikka::tikka()
{
    price = 1259.99;
    description = new char[230];
    description = "A specially developed recipe  topped with spicy  tikka boti & onions. Gluten Free.";
    chicken = true;
    count++;
}
bool tikka::get_gluten()
{
    return gluten;
}
double tikka::get_price()
{
    return price;
}
double tikka::set_price(double PRICE)
{
    price = PRICE;
    return  0;
}
char* tikka::get_description()
{
    return description;
}
char* tikka::set_description(char *desc)
{
    description = desc;
    return  0;
}
tikka::~tikka()
{
    delete[] description;
}
bool tikka::get_beef()
{
    return beef;
}
bool tikka::get_chicken()
{
    return chicken;
}
void tikka::set_beef(bool B)
{
    beef = B;
}
void tikka::set_chicken(bool B)
{
    chicken = B;
}
