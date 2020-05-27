#include "Staff.h"
#include <fstream>
#include <string>
Staff::Staff() : Staff_ID(""), Staff_Password(""), salary(0) {}
void Staff::setsalary(double s)
{
    salary = s;
}
double Staff::getsalary()
{
    return salary;
}
char* Staff::getID()
{
    return Staff_ID;
}
char* Staff::getPass()
{
    return Staff_Password;
}

