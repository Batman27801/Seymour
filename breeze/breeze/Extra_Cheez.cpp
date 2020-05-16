#include "Toping.h"
#include "Extra_Cheez.h"
#include <string.h>
Extra_Cheez::Extra_Cheez() : Red_Pepper_Flakes(true),Extra(Macroni)
{
    strcpy_s(name, "Extra_Cheez");
    initialize();
}

void Extra_Cheez::initialize()
{
    price = 140.4;
    strcpy_s(details, "Who does not love a little extra cheese for the perfect cheese-pull picture? We sure do. You might want to check with your local pizza joint to see how much cheese actually comes with an extra cheese order, because apparently, it is hotly debated.");
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
