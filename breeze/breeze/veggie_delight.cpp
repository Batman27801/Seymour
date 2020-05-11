#include "veggie_delight.h"
#include<iostream>
bool veggie_delight::gluten = false;
int veggie_delight::count = 0;
veggie_delight::veggie_delight()
{
    price = 1000;
    description = new char[230];
    description = "A colorful medley of tomatoes, onions, mushrooms, black olives, and green peppers. Gluten free";
    gluten = false;
    name = new char[230];
    name = "veggie_delight";
    count++;
}
bool veggie_delight::get_gluten()
{
    return gluten;
}
double veggie_delight::get_price()
{
    return price;
}
double veggie_delight::set_price(double PRICE)
{
    price = PRICE;
    return 0;
}
char* veggie_delight::get_description()
{
    return description;
}
char* veggie_delight::set_description(char*desc)
{
    description = desc;
    return 0;
}
veggie_delight::~veggie_delight()
{
    delete[] description;
}
char* veggie_delight::get_Addon()
{
    return 0;
}