#include "seekh_kebab.h"
#include<iostream>
bool seekh_kebab::gluten = true;
int seekh_kebab::count = 0;
seekh_kebab::seekh_kebab()
{
    price = 1400;
    description = new char[230];
    description = "Topped with seekh kabab chunks on tantalizing blend of spicy chicken, onions capsicum, green pepper and cheese. Contains gluten in significant amounts";
    name = new char[230];
    name = "seekh_kebab";
    count++;
}
bool seekh_kebab::get_gluten()
{
    return gluten;
}

seekh_kebab::~seekh_kebab()
{
    delete[] description;
}
bool seekh_kebab::get_beef()
{
    return beef;
}
bool seekh_kebab::get_chicken()
{
    return chicken;
}
void seekh_kebab::set_beef(bool B)
{
    beef = B;
}
void seekh_kebab::set_chicken(bool B)
{
    chicken = B;
}
char* seekh_kebab::get_Addon()
{
    if (chicken == true)
    {
        return "Chicken";
    }
    else if (beef == true)
    {
        return "Beef";
    }
}
void seekh_kebab::set_meat(char* choice)
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
    if (choice == "CHICKEN")
    {
        chicken = true;
        price += 65;
    }
    else if (choice = "BEEF")
    {
        beef = true;
        price += 88;
    }
    else
    {
        std::cout << "Please enter the correct choices" << std::endl;
    }
}