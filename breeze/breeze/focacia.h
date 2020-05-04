#pragma once
#include <iostream>
#include "crust.h"
using namespace std;

enum herbs { onions = 1, garlic = 2, scallion = 3, garlicpowder = 4 };
enum coating { oliveoil = 1, scentedoil = 2, flavoured = 3 };
class focacia : public crust
{
private:
    enum herbs herb;
    enum coating coat;

public:
    focacia();
    void setsize(int);
    int getsize();
    double get_price();
    void set_price(double);
    string  get_description();
    void set_description(string);
    void setherbs(herbs);
    herbs getherbs();
    void setcoating(coating);
    coating getcoating();
    bool getgluten();
    void setgluten(bool);
    bool getthickthin();
    void setthickthin(bool);
};