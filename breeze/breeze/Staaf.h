#ifndef STAAF
#define STAAF
#include "Person.h"

class Staaf : public Person
{
protected:
    char Staaf_ID[20], Staaf_Password[20];
    double salary;
public:
    Staaf();
    virtual bool setID(string) = 0;
    virtual bool setPass(string) = 0;
    void setsalary(double);
    char* getID();
    char* getPass();
    double getsalary();
};
#endif