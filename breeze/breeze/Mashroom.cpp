#include "Toping.h"
#include "Mashroom.h"

Mashroom::Mashroom() : price(200.5), details("This earthy topping can be divisive in the kitchen, but many agree that it fits right in on a pizza, and this breakfast recipe is a perfect excuse to try eggs on a pizza. Spoiler: You are going to love it.") {}
Mashroom::~Mashroom()
{
    cout << endl;
}
void Mashroom::setprice(float p)
{
    price = p;
}
float Mashroom::getprice()
{
    return price;
}
void Mashroom::Information()
{
    cout << endl << details;
}
void Mashroom::setInform(string I)
{
    details = I;
}
void Mashroom::setCO(bool n)
{
    Creamlized_Onion = n;
}
bool Mashroom::getCO()
{
    return Creamlized_Onion;
}
bool Mashroom::getCRGS()
{
    return Creamy_Rosted_Garlic_Sause;
}
void Mashroom::setCRGS(bool n)
{
    Creamy_Rosted_Garlic_Sause = n;
}
