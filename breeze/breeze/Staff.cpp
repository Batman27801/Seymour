#include "Staff.h"
#include <fstream>
#include <string>
Staff::Staff() : Staff_ID(""), Staff_Password(""), salary(0) {}
Staff::Staff(int a) : Staff_ID("M_1234"), Staff_Password("FASTNUCES"), salary(a) {}

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

