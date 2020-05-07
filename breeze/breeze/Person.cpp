#include "Person.h"
#include <string>
#include <stdlib.h>
Person::Person() : name(""), Fath_Name(""), age(0), gender(Male) {}

Person::~Person()
{
    cout << endl;
}

void Person::setname(string N)
{
    string tempN;
    int size, i, n = 0;
    size = N.size();
    for (i = 0; i < size; i++)
    {
        if (N[i] >= 48 && N[i] <= 57)
        {
            n = 1;
        }
    }
    try
    {
        if (n == 0)
        {
            name = N;
            return;
        }
        else throw 1;
    }
    catch (...)
    {
        cout << endl << "Invalid Input";
        cout << endl << "Re Enter Name: ";
        fflush(stdin);
        getline(cin, tempN);
        setname(tempN);
    }

}

void Person::setF_Name(string FN)
{
    string tempFN;
    int size, i, n = 0;
    size = FN.size();
    for (i = 0; i < size; i++)
    {
        if (FN[i] >= 48 && FN[i] <= 57)
        {
            n = 1;
        }
    }
    try
    {
        if (n == 0)
        {
            Fath_Name = FN;
            return;
        }
        else throw 1;
    }
    catch (...)
    {
        cout << endl << "Invalid Input";
        cout << endl << "Re Enter Father Name: ";
        fflush(stdin);
        getline(cin, tempFN);
        setF_Name(tempFN);
    }
}

void Person::setage(int a)
{
    int tempA;
    int n = a, c = 0;
    while (n > 0)
    {
        n = n / 10;
        c++;
    }
    try
    {
        if (c == 2)
        {
            age = a;
            return;
        }
        else throw 1;
    }
    catch (...)
    {
        cout << endl << "Invalid Age!";
        cout << endl << "Enter Valid Age: ";
        cin >> tempA;
        setage(tempA);
    }
}

void Person::setGender(Gender g)
{
    gender = g;
}

string Person::getname()
{
    return name;
}

string Person::getF_Name()
{
    return Fath_Name;
}

Gender Person::getGender()
{
    return gender;
}

int Person::getage()
{
    return age;
}

