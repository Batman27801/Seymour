#include "Toping.h"
#include "Beef.h"

Beef::Beef() : price(380), details("In case you have not noticed the trend, meat is always popular on top of pizzas. Whether you are going for a dressier steak pizza, a kid-friendly cheeseburger pizza, or a pizza topped with meatballs (actually a thing), beef always has a place on pizza.") {}
Beef::~Beef()
{
    cout << endl;

}
void Beef::setprice(float p)
{
    price = p;
}
float Beef::getprice()
{
    return price;
}

string Beef::getdetails()
{
    return details;
}
void Beef::setdetails(string I)
{
    details = I;
}
void Beef::setCS(bool n)
{
    Cloves_Spice = n;
}
bool Beef::getCS()
{
    return Cloves_Spice;
}