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
void stuffed::setsize(int s)
{
    size = s;
    price = price + (size - 6) * 60;
}
int stuffed::getsize()
{
    return size;
}
double stuffed::get_price()
{
    return price;
}
void stuffed::set_price(double p)
{
    price = p;
}
string stuffed::get_description()
{
    return description;
}
void stuffed::set_description(string s)
{
    description = s;
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
bool stuffed::getthickthin()
{
    return thick;
}
void stuffed::setthickthin(bool b)
{
    thick = b;
    thin = !b;
}
bool stuffed::getgluten()
{
    return gluten;
}
void stuffed::setgluten(bool g)
{
    gluten = g;
}