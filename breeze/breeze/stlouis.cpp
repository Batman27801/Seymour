#pragma once
#include <iostream>
#include "stlouis.h"
using namespace std;

stlouis::stlouis()
{
    price = 230;
    size = 6;
    strcpy_s(description, "There are many interesting things going for the St. Louis style pizza. A cheese lining on the crust and a very crunchy and not pliable crust, some even refer to the texture as cracker-like");
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
void stlouis::settavern(bool b)
{
    tavern = b;
}
bool stlouis::gettavern()
{
    return tavern;
}
void stlouis::setcheese(bool b)
{
    cheese = b;
}
bool stlouis::getcheese()
{
    return cheese;
}
void stlouis::Hello()
{
    cout << endl << "Hello";
}