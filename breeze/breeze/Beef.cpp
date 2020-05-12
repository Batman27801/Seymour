#include "Toping.h"
#include "Beef.h"

Beef::Beef() :Cloves_Spice(true), pepper(Red)
{
    initialize();
}
Beef::~Beef()
{
    cout << endl;

}
void Beef::initialize()
{
    price = 380;
    details = "In case you have not noticed the trend, meat is always popular on top of pizzas. Whether you are going for a dressier steak pizza, a kid-friendly cheeseburger pizza, or a pizza topped with meatballs (actually a thing), beef always has a place on pizza.";
}
void Beef::setCS(bool n)
{
    Cloves_Spice = n;
}
bool Beef::getCS()
{
    return Cloves_Spice;
}
void Beef::setpepper(peppers p)
{
    pepper = p;
}
peppers Beef::getpepper()
{
    return pepper;
}