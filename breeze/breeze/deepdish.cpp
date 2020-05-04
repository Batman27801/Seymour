#pragma once
#include <iostream>
#include "deepdish.h"
using namespace std;

deepdish::deepdish()
{
    price = 320;
    size = 8;
    description = "Deep dish pizza crust contains ketchup, chilli sauce, or our special sauce to give it its distinctly yellow tone and enhance its unique taste and texture. Order one of these if you want a taste of true Chicago DeepDish Pizzas.";
    deep = two;
    sauce = ketchup;
    onions = 0;
    thick = 1;
    thin = 0;
    gluten = 1;
}
void deepdish::setsize(int s)
{
    size = s;
    price = price + (size - 8) * 70;
}
int deepdish::getsize()
{
    return size;
}
double deepdish::get_price()
{
    return price;
}
void deepdish::set_price(double p)
{
    price = p;
}
string deepdish::get_description()
{
    return description;
}
void deepdish::set_description(string s)
{
    description = s;
}
void deepdish::setthick(thickness h)
{
    deep = h;
    if (deep == twohalf)
        price += 30;
    else if (deep == three)
        price += 60;
}
thickness deepdish::getthick()
{
    return deep;
}
void deepdish::setsauce(sauces c)
{
    sauce = c;
    if (sauce == chilli)
        price += 20;
    else if (sauce == special)
        price += 50;

}
sauces deepdish::getsauce()
{
    return sauce;
}
bool deepdish::getthickthin()
{
    return thick;
}
void deepdish::setthickthin(bool b)
{
    thick = b;
    thin = !b;
}
bool deepdish::getgluten()
{
    return gluten;
}
void deepdish::setgluten(bool g)
{
    gluten = g;
}
bool deepdish::getonions()
{
    return onions;
}
void deepdish::setonions(bool g)
{
    onions = g;
    if (onions == true)
        price += 10;
}