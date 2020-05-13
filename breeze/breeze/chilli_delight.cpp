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
    name = new char[230];
    name = "chilli_delight";
    count++;
    red = false;
    green = false;
}
bool chilli_delight::get_gluten()
{
    return gluten;
}
void chilli_delight::get_chilli(char* choice)
{
    int i;
    //make sure every character in the user input is uppercase
    for (i = 0; i <= strlen(choice); i++)
    {
        if (choice[i] >= 'a' && choice[i] <= 'z')
        {
            choice[i] = choice[i] - 32;
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
    delete[] name;
}
char* chilli_delight::get_Addon()
{
    if (green == true)
    {
        return "Green Chilli";

    }
    else if (red == true)
    {
        return "Red Chilli";
    }
}