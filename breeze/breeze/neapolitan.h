#pragma once
#include "crust.h"
using namespace std;

enum cookstyle { pan = 1, wood_fired = 2, oven = 3 };
class neapolitan : public crust
{
private:
    enum cookstyle cook;
    bool essence;               //sunflower oil essencce
    bool hand;

public:
    neapolitan();
    void setsize(int);
    int getsize();
    double get_price();
    void set_price(double);
    string  get_description();
    void set_description(string);
    void setessence(bool);
    bool getessence();
    void sethand(bool);
    bool gethand();
    void setcookstyle(cookstyle);
    cookstyle getcookstyle();
    bool getgluten();
    void setgluten(bool);
    bool getthickthin();
    void setthickthin(bool);
};

