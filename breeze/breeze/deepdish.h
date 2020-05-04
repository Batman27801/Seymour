#pragma once
#include <iostream>
#include "crust.h"
using namespace std;

enum thickness { two = 1, twohalf = 2, three = 3 };
enum sauces { ketchup = 1, chilli = 2, special = 3 };
class deepdish : public crust
{
private:
    enum thickness deep;
    enum sauces sauce;
    bool onions;

public:
    deepdish();
    void setsize(int);
    int getsize();
    double get_price();
    void set_price(double);
    string  get_description();
    void set_description(string);
    void setthick(thickness);
    thickness getthick();
    void setsauce(sauces);
    sauces getsauce();
    bool getonions();
    void setonions(bool);
    bool getgluten();
    void setgluten(bool);
    bool getthickthin();
    void setthickthin(bool);
};