#pragma once
#include <iostream>
#include "stlouis.h"
using namespace std;

stlouis::stlouis()
{
    price = 230;
    size = 6;
    description = "There are many interesting things going for the St. Louis style pizza. A cheese lining on the crust and a very crunchy and not pliable crust, some even refer to the texture as cracker-like";
    tavern = 1;
    cheese = 0;
    thick = 0;
    thin = 1;
    gluten = 0;
}
void stlouis::setsize(int s)
{
    size = s;
    price = price + (size - 6) * 45;
}
int stlouis::getsize()
{
    return size;
}
double stlouis::get_price()
{
    return price;
}
void stlouis::set_price(double p)
{
    price = p;
}
string stlouis::get_description()
{
    return description;
}
void stlouis::set_description(string s)
{
    description = s;
}
void stlouis::settavern(bool b)
{
    tavern = b;
}
bool stlouis::gettavern()
{
    return tavern;
}
bool stlouis::getthickthin()
{
    return thick;
}
void stlouis::setthickthin(bool b)
{
    thick = b;
    thin = !b;
}
bool stlouis::getgluten()
{
    return gluten;
}
void stlouis::setgluten(bool g)
{
    gluten = g;
}
void stlouis::setcheese(bool b)
{
    cheese = b;
}
bool stlouis::getcheese()
{
    return cheese;
}