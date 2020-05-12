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
void newyork::Hello()
{
    cout << endl << "Hello";
}