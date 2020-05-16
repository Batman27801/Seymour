#include "Toping.h"
#include "Mashroom.h"
#include <string.h>
Mashroom::Mashroom(): Creamlized_Onion(true),Creamy_Rosted_Garlic_Sause(true)
{
    strcpy_s(name, "Mashroom");
    initialize();
}

void Mashroom::initialize()
{
    strcpy_s(details, "This earthy topping can be divisive in the kitchen, but many agree that it fits right in on a pizza, and this breakfast recipe is a perfect excuse to try eggs on a pizza. Spoiler: You are going to love it.");
    price = 200.5;
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
