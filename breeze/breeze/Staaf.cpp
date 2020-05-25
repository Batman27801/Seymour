#include "Staaf.h"
#include <fstream>
#include <string>
Staaf::Staaf() : Staaf_ID(""), Staaf_Password(""), salary(0) {}
void Staaf::setsalary(double s)
{
    salary = s;
}
double Staaf::getsalary()
{
    return salary;
}
string Staaf::getID()
{
    return Staaf_ID;
}
string Staaf::getPass()
{
    return Staaf_Password;
}

