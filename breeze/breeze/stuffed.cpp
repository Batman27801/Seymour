#pragma once
#include <iostream>
#include "stuffed.h"
using namespace std;

stuffed::stuffed()
{
    price = 300;
    size = 6;
    description = "Stuffed crust pizza is pizza with cheese of your favourite type added into the crust! This is the type of piece that’s actually best enjoyed crust side first! a warm juicy cheesey bite awaits your signal!";
    layer = single;
    cheese = cheddar;
    fill = edge;
    thick = 1;
    thin = 0;
    gluten = 1;
}

void stuffed::setcheese(cheesetype h)
{
    cheese = h;
    if (cheese == american)
        price += 10;
}
cheesetype stuffed::getcheese()
{
    return cheese;
}
void stuffed::setfilling(filling c)
{
    fill = c;
    if (fill == base)
        price += 50;
    else if (fill == whole)
        price += 80;

}
filling stuffed::getfilling()
{
    return fill;
}
void stuffed::setlayer(layering b)
{
    layer = b;
    if (layer == thincut)
        price -= 20;
    else if (layer == doubled)
        price += 50;
}
layering stuffed::getlayer()
{
    return layer;
}
void stuffed::Hello()
{
    cout << endl << "Hello";
}