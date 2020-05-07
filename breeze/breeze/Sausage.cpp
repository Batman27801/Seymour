#include "Toping.h"
#include "Sausage.h"

Sausage::Sausage() : price(175.5), details("Some prefer mild, others spicy, and Southerners Conecuh, but sausage is consistently a favorite pizza topping of Americans. This cast-iron pizza recipe gives you another reason to love that skillet.") {}
Sausage::~Sausage()
{
    cout << endl;
}
void Sausage::setprice(float p)
{
    price = p;
}
float Sausage::getprice()
{
    return price;
}
string Sausage::getdetails()
{
    return details;
}
void Sausage::setdetails(string I)
{
    details = I;
}
void Sausage::setRPF(bool RPF)
{
    Red_Pepper_Flakes = RPF;
}
bool Sausage::getRPF()
{
    return Red_Pepper_Flakes;
}
void Sausage::setBS(bool BS)
{
    Basil_Scattering = BS;
}
bool Sausage::getBS()
{
    return Basil_Scattering;
}