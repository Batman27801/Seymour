#include "chilli_delight.h"
#include<iostream>
#include<string>
bool::chilli_delight::gluten = false;
int chilli_delight::count = 0;
chilli_delight::chilli_delight()
{
    price = 1100;
    description = new char[230];
    description = "Fire up your taste buds with spicy chicken chunks, onions, olives, jalapenos and hot peri sauce. Gluten free.";
    chicken = true;
    count++;
}
bool chilli_delight::get_gluten()
{
    return gluten;
}
double chilli_delight::get_price()
{
    return price;
}
double chilli_delight::set_price(double PRICE)
{
    price = PRICE;
    return  0;
}
char* chilli_delight::get_description()
{
    return description;
}
char* chilli_delight::set_description(char *desc)
{
    description = desc;
    return  0;
}
void chilli_delight::get_chilli(char* choice)
{
    int i;
    //make sure every character in the user input is uppercase
    for (i = 0; i <= strlen(choice); i++)
    {
        if (choice[i] >= 'a' && choice[i] <= 'z')
        {
            choice[i] - choice[i] - 32;
        }
    }
    if (choice = "RED")
    {
        red = true;
        green = false;
        price = price + 75;
    }
    else if (choice = "GREEN")
    {
        green = true;
        red = false;
        price = price + 65;
    }
    else {
        std::cout << "please enter the correct info" << std::endl;
    }
}
chilli_delight::~chilli_delight()
{
    delete[] description;
}
