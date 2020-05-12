#include "Toping.h"
#include "Sausage.h"

Sausage::Sausage() : Basil_Scattering(true), Red_Pepper_Flakes(true)
{
    initialize();
}
Sausage::~Sausage()
{
    cout << endl;
}
void Sausage::initialize()
{
    details = "Some prefer mild, others spicy, and Southerners Conecuh, but sausage is consistently a favorite pizza topping of Americans. This cast-iron pizza recipe gives you another reason to love that skillet.";
    price = 175.5;
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