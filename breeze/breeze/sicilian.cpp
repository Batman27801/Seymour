#pragma once
#include <iostream>
#include "sicilian.h"
using namespace std;

sicilian::sicilian()
{
    price = 300;
    size = 6;
    description = "Much different from the thin, crispy crust in Naples, Sicilian pizza is known for its thick, rectangle-shaped crust that is often over an inch thick. Baked in a well-oiled pan to a chewy medium-well-done state that gives the bottom and edges of the crust an almost fried texture";
    oil = olive;
    pan = standard;
    thick = 1;
    thin = 0;
    gluten = 1;
}

void sicilian::setoil(oilchoice h)
{
    oil = h;
    if (oil == canola)
        price += 10;
    else if (oil == flavored)
        price += 25;
}
oilchoice sicilian::getoil()
{
    return oil;
}
void sicilian::setpan(panchoice c)
{
    pan = c;
    if (pan == deep)
        price += 20;
    else if (pan == hightemp)
        price += 40;

}
panchoice sicilian::getpan()
{
    return pan;
}
void sicilian::Hello()
{
    cout << endl << "Hello";
}