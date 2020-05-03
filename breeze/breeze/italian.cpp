#pragma once
#include <iostream>
#include "italian.h"

italian::italian()
{
    price = 200;
    size = 6;
    description = "A perfectly thin crispy and delightful crust infused with the herbs of your choice. Crispy and crunchy but not too brittle. That's the perfect Italian Crust for you";
    herb = none;
    cook = oven;
    olive_oil = 0;
    thick = 0;
    thin = 1;
    gluten = 0;
}
void italian::setsize(int s)
{
    size = s;
    price = price + (size - 6) * 40;
}
int italian::getsize()
{
    return size;
}
double italian::get_price()
{
    return price;
}
void italian::set_price(double p)
{
    price = p;
}
string italian::get_description()
{
    return description;
}
void italian::set_description(string s)
{
    description = s;
}
void italian::setherbs(herbs h)
{
    herb = h;
    if (herb != none)
        price += 20;
}
herbs italian::getherbs()
{
    return herb;
}
void italian::setcookstyle(cookstyle c)
{
    cook = c;
    if (cook == wood_fired)
        price += 50;
    else if (cook == pan)
        price += 25;

}
cookstyle italian::getcookstyle()
{
    return cook;
}
void italian::setolive(bool b)
{
    olive_oil = b;
    if (olive_oil == true)
        price += 30;
}
bool italian::getolive()
{
    return olive_oil;
}
bool italian::getthickthin()
{
    return thick;
}
void italian::setthickthin(bool b)
{
    thick = b;
    thin = !b;
}
bool italian::getgluten()
{
    return gluten;
}
void italian::setgluten(bool g)
{
    gluten = g;
}