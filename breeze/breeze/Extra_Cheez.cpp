#include "Toping.h"
#include "Extra_Cheez.h"
#include <string.h>
Extra_Cheez::Extra_Cheez() : Red_Pepper_Flakes(false),Extra(Macroni)
{
    strcpy_s(name, "Extra_Cheez");
    price = 140.4;
    strcpy_s(details, "Who does not love a little extra cheese for the perfect cheese-pull picture? We sure do. ");

   
}

void Extra_Cheez::setRPF(bool n)
{
    Red_Pepper_Flakes = n;
}
bool Extra_Cheez::getRPF()
{
    return Red_Pepper_Flakes;
}
void Extra_Cheez::setExtra(Extras E)
{
    Extra = E;
}
Extras Extra_Cheez::getExtra()
{
    return Extra;
}
double Extra_Cheez::getprice()
{
    if (Red_Pepper_Flakes == true)
    {
        price = (price + 50);
    }
    if (Extra == Cheese)
    {
        price = (price + 150);
    }
    return price;
}