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
    name = new char[230];
    name = "tikka";
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
    delete[] name;
}
bool tikka::get_beef()
{
    return beef;
}
bool tikka::get_chicken()
{
    return chicken;
}
double tikka::set_beef(bool B)
{
    chicken = false;
    beef = B;
    return 50;
}
double tikka::set_chicken(bool B)
{
    beef = false;
    chicken = B;
    return 30;
}
char* tikka::get_Addon()
{
    if (chicken==true)
    {
        return "Chicken";
    }
    else if (beef==true)
    {
        return "Beef";
    }
}