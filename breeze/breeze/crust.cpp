#include "crust.h"
void crust::setsize(int s)
{
    size = s;
    price = price + (size - 8) * 70;
}
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
    description = s;
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