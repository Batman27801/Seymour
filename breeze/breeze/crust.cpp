#include "crust.h"
int crust::getsize()
{
    return size;
}
double crust::get_price()
{
    return price;
}
void crust::set_price(double p)
{
    price = p;
}
string crust::get_description()
{
    return description;
}
void crust::set_description(string s)
{
    for (int i = 0; i < 350; i++)
    {
        description[i] = s[i];
    }
}
bool crust::getthickthin()
{
    return thick;
}
void crust::setthickthin(bool b)
{
    thick = b;
    thin = !b;
}
bool crust::getgluten()
{
    return gluten;
}
void crust::setgluten(bool g)
{
    gluten = g;
}