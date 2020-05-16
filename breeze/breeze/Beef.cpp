#include "Toping.h"
#include "Beef.h"
#include <string.h>
Beef::Beef() :Cloves_Spice(true), pepper(Red)
{
    strcpy_s(name, "Beef");
    initialize();
}

void Beef::initialize()
{
    price = 380;
    strcpy_s(details, "In case you have not noticed the trend, meat is always popular on top of pizzas. Whether you are going for a dressier steak pizza, a kid-friendly cheeseburger pizza, or a pizza topped with meatballs (actually a thing), beef always has a place on pizza.");
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