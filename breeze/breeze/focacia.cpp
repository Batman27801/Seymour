#pragma once
#include <iostream>
#include "focacia.h"
using namespace std;

focacia::focacia()
{
    price = 300;
    size = 6;
    description = "focacia crust pizza is pizza with cheese of your favourite type added into the crust! This is the type of piece that’s actually best enjoyed crust side first! a warm juicy cheesey bite awaits your signal!";
    herb = onions;
    coat = oliveoil;
    thin = 0;
    gluten = 1;
}

void focacia::setherbs(herbs h)
{
    herb = h;
    if (herb == garlic)
        price += 10;
    else if (herb == scallion)
        price += 15;
    else if (herb == garlicpowder)
        price += 15;
}
herbs focacia::getherbs()
{
    return herb;
}
void focacia::setcoating(coating c)
{
    coat = c;
    if (coat == scentedoil)
        price += 30;
    else if (coat == flavoured)
        price += 40;

}
coating focacia::getcoating()
{
    return coat;
}
void focacia::Hello()
{
    cout << endl << "Hello";
}