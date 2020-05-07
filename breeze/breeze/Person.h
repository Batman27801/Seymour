#ifndef PERSON
#define PERSON
#include <iostream>
using namespace std;
enum Gender { Male = 1, Female = 2 };
class Person
{
protected:
    string name;
    string Fath_Name;
    int age;
    Gender gender;

public:
    Person();
    ~Person();
    void setname(string);
    void setF_Name(string);
    void setage(int);
    void setGender(Gender);
    string getname();
    string getF_Name();
    int getage();
    Gender getGender();
};
#endif