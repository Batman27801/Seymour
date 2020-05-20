#include "Toping.h"
#include "Beef.h"
#include <string.h>
Beef::Beef() :Cloves_Spice(false), pepper(Red)
{
    strcpy_s(name, "Beef");
    price = 380;
    strcpy_s(details, "In case you have not noticed the trend, meat is always popular on top of pizzas. No matter what the pizza is the Beef is always prefered. ");
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
double Beef::getprice()
{
    if (Cloves_Spice == true)
    {
        return (price + 40);
    }
    else return price;
}