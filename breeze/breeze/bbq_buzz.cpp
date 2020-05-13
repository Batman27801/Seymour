#include "bbq_buzz.h"
#include<iostream>
bool bbq_buzz::gluten = true;
int bbq_buzz::count = 0;
bbq_buzz::bbq_buzz()
{
    price = 1100;
    description = new char[230];
    description = "Smoked chicken, capsicum, onions and black olives, sweet and smoky BBQ sauce. Contains gluten in significant amounts";
    chicken = true;
    name = new char[230];
    name = "bbq_buzz";
    count++;
}
void bbq_buzz::set_sauce(char* choice)
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
    if (choice == "BBQ")
    {
        price += 95;
    }
    else if (choice == "RANCH")
    {
        price += 105;
    }
    else {
        std::cout << "Please Enter the correct choice" << std::endl;
    }
}
bool bbq_buzz::get_gluten()
{
    return gluten;
}

bbq_buzz::~bbq_buzz()
{
    delete[] description;
    delete[] name;
}

void bbq_buzz::set_bbq(bool B)
{
    bbq_sauce = B;
}
void bbq_buzz::set_chicken(bool B)
{
    chicken = B;
}
void bbq_buzz::set_ranch(bool B)
{
    ranch = B;
}
bool bbq_buzz::get_chicken()
{
    return chicken;
}
bool bbq_buzz::get_bbq()
{
    return bbq_sauce;
}
bool bbq_buzz::get_ranch()
{
    return ranch;
}
char* bbq_buzz::get_Addon()
{
    if (ranch == true)
    {
        return "Ranch";
    }
    else if (bbq_sauce == true)
    {
        return "Bbq Sauce";
    }
}