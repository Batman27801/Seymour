#include "The_cheese.h"
#include<iostream>
bool The_cheese::gluten = false;
int The_cheese::count = 0;
The_cheese::The_cheese()
{
    price = 1400;
    description = new char[230];
    description = "Go back to where it all began with classic mozzarella cheese & tomato base. Gluten free";
    count++;
    name = new char[230];
    name = "The_cheese";
}
void The_cheese::set_cheese(char* choice)
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
    if (choice == "MOZARELLA")
    {
        mozarella = true;
        price += 65;
    }
    else if (choice = "GOUDA")
    {
        gouda = true;
        price += 88;
    }
    else if (choice == "CHEDDAR")
    {
        cheddar = true;
        price += 70;
    }
    else
    {
        std::cout << "Please enter the correct choices" << std::endl;
    }
}

bool The_cheese::get_gluten()
{
    return gluten;
}
double The_cheese::get_price()
{
    return price;
}
double The_cheese::set_price(double PRICE)
{
    price = PRICE;
    return  0;
}
char* The_cheese::get_description()
{
    return description;
}
char* The_cheese::set_description(char* desc)
{
    description = desc;
    return 0;
}
The_cheese::~The_cheese()
{
    delete[] description;
    delete[] name;
}
void The_cheese::set_mozarella(bool B)
{
    mozarella = B;
}
void The_cheese::set_cheddar(bool B)
{
    cheddar = B;
}
void The_cheese::set_gouda(bool B)
{
    gouda = B;
}
bool The_cheese::get_mozarella()
{
    return mozarella;
}
bool The_cheese::get_cheddar()
{
    return cheddar;
}
bool The_cheese::get_gouda()
{
    return gouda;
}
char* The_cheese::get_Addon()
{
    if (gouda == true)
    {
        return "Gouda";
    }
    else if (mozarella == true)
    {
        return "Mozarella";
    }
    else if (cheddar == true)
    {
        return "Cheddar";
    }
}