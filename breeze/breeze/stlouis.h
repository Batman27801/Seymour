#pragma once
#include <iostream>
#include "crust.h"
using namespace std;

class stlouis : public crust
{
private:
    bool cheese;
    bool tavern;

public:
    stlouis();
    void setsize(int);
    int getsize();
    double get_price();
    void set_price(double);
    string  get_description();
    void set_description(string);
    void setcheese(bool);
    bool getcheese();
    bool getgluten();
    void setgluten(bool);
    bool getthickthin();
    void setthickthin(bool);
    bool gettavern();
    void settavern(bool);
};