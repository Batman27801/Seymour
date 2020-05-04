#pragma once
#include <iostream>
#include "newyork.h"
using namespace std;

newyork::newyork()
{
    price = 310;
    size = 9;
    mineralized = 0;
    description = "New York-style crust is slightly crispy on the outside, yet soft and pliable enough to fold the big slices in half, making it easier to eat. New York-style pizza crust gets its unique flavor and texture from its high-gluten bread flour";
    herb = none;
    thick = 0;
    thin = 1;
    gluten = 1;
}
void newyork::setsize(int s)
{
    size = s;
    price = price + (size - 9) * 40;
}
int newyork::getsize()
{
    return size;
}
double newyork::get_price()
{
    return price;
}
void newyork::set_price(double p)
{
    price = p;
}
string newyork::get_description()
{
    return description;
}
void newyork::set_description(string s)
{
    description = s;
}
void newyork::setherbs(herbs h)
{
    herb = h;
    if (herb != none)
        price += 20;
}
herbs newyork::getherbs()
{
    return herb;
}
void newyork::setmineralized(bool b)
{
    mineralized = b;
    if (mineralized == true)
        price += 60;
}
bool newyork::getmineralized()
{
    return mineralized;
}
bool newyork::getthickthin()
{
    return thick;
}
void newyork::setthickthin(bool b)
{
    thick = b;
    thin = !b;
}
bool newyork::getgluten()
{
    return gluten;
}
void newyork::setgluten(bool g)
{
    gluten = g;
}