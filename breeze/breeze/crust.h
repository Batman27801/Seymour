#pragma once
#include <string>
using namespace std;

enum herbs { none = 0, onions = 1, garlic = 2, scallion = 3, garlicpowder = 4 };

class crust
{
protected:
    double price;
    string description;
    int size;
    bool thick, thin, gluten;

public:
    virtual void setsize(int) = 0;
    virtual int getsize() = 0;
    virtual double get_price() = 0;
    virtual void set_price(double) = 0;
    virtual string  get_description() = 0;
    virtual void set_description(string) = 0;
    virtual bool getthickthin() = 0;
    virtual void setthickthin(bool) = 0;
    virtual bool getgluten() = 0;
    virtual void setgluten(bool) = 0;
};

