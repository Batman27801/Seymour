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
char* Staaf::getID()
{
    return Staaf_ID;
}
char* Staaf::getPass()
{
    return Staaf_Password;
}

