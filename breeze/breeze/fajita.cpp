#include "fajita.h"
#include<iostream>
bool fajita::gluten = true;
int fajita::count = 0;
fajita::fajita()
{
    price = 1349.99;
    description = new char[230];
    description = "contains an epic blend of cheese with authentic fresh chicken meat.Contains traces of gluten";
    chicken = true;
    //gluten=false;
    beef = false;
    count++;
}
double fajita::get_price()
{
    return price;
}
double fajita::set_price(double PRICE)
{
    price = PRICE;
    return 0;
}
char* fajita::get_description()
{
    return description;
}
char* fajita::set_description(char *desc)
{
    description = desc;
    return 0;
}
bool fajita::get_gluten()
{
    return gluten;
}
double fajita::set_meat(char *choice)
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
    if (choice == "BEEF")
    {
        beef = true;
        price = price + 75;
    }
    else if (choice == "CHICKEN")
    {
        chicken = true;
        price = price + 55;
    }
    else {
        std::cout << "Please enter the correct choices" << std::endl;
    }
    return 0;
}
fajita::~fajita()
{
    delete[] description;
}
bool fajita::get_beef()
{
    return beef;
}
bool fajita::get_chicken()
{
    return chicken;
}
void fajita::set_beef(bool B)
{
    beef = B;
}
void fajita::set_chicken(bool B)
{
    chicken = B;
}