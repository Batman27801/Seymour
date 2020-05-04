#pragma once
#include <iostream>
#include "crust.h"
using namespace std;

enum cheesetype { cheddar = 1, american = 2, mozeralla = 3 };
enum filling { edge = 1, base = 2, whole = 3 };
enum layering { single = 1, thincut = 2, doubled = 3 };
class stuffed : public crust
{
private:
    enum cheesetype cheese;
    enum filling fill;
    enum layering layer;

public:
    stuffed();
    void setsize(int);
    int getsize();
    double get_price();
    void set_price(double);
    string  get_description();
    void set_description(string);
    void setcheese(cheesetype);
    cheesetype getcheese();
    void setfilling(filling);
    filling getfilling();
    void setlayer(layering);
    layering getlayer();
    bool getgluten();
    void setgluten(bool);
    bool getthickthin();
    void setthickthin(bool);
};