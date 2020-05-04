#pragma once
#include "crust.h"
using namespace std;

enum herbs { none = 0, onions = 1, garlic = 2 };
class newyork : public crust
{
private:
    enum herbs herb;
    bool mineralized;

public:
    newyork();
    void setsize(int);
    int getsize();
    double get_price();
    void set_price(double);
    string  get_description();
    void set_description(string);
    void setherbs(herbs);
    herbs getherbs();
    void setmineralized(bool);
    bool getmineralized();
    bool getgluten();
    void setgluten(bool);
    bool getthickthin();
    void setthickthin(bool);
};