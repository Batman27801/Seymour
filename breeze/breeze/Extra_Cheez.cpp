#include "Toping.h"
#include "Extra_Cheez.h"
Extra_Cheez::Extra_Cheez() : price(140.4), details("Who does not love a little extra cheese for the perfect cheese-pull picture? We sure do. You might want to check with your local pizza joint to see how much cheese actually comes with an extra cheese order, because apparently, it is hotly debated.") {}
Extra_Cheez::~Extra_Cheez()
{
    cout << endl;
}
void Extra_Cheez::setprice(float p)
{
    price = p;
}
float Extra_Cheez::getprice()
{
    return price;
}
void Extra_Cheez::Information()
{
    cout << endl << details;
}
void Extra_Cheez::setInform(string I)
{
    details = I;
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
