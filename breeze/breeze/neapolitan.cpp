#pragma once
#include <iostream>
#include "neapolitan.h"
using namespace std;

neapolitan::neapolitan()
{
    price = 240;
    size = 6;
    description = "Given that pizza is purported to have originated in Naples, it's no surprise that Neapolitan pizza is believed to be the original Italian pizza. Bundled with a signature light, slightly crispy texture and airy bites, this crust will surely be a delight for your taste buds";
    cook = oven;
    hand = 0;
    thick = 0;
    thin = 1;
    gluten = 0;
}
void neapolitan::setcookstyle(cookstyle c)
{
    cook = c;
    if (cook == wood_fired)
        price += 50;
    else if (cook == pan)
        price += 25;
}
cookstyle neapolitan::getcookstyle()
{
    return cook;
}
void neapolitan::setessence(bool b)
{
    essence = b;
    if (essence == true)
        price += 20;
}
bool neapolitan::getessence()
{
    return essence;
}
void neapolitan::sethand(bool b)
{
    hand = b;
    if (hand == true)
    {
        price += 110;
    }
}
bool neapolitan::gethand()
{
    return hand;
}
void neapolitan::Hello()
{
    cout << endl << "Hello";
}