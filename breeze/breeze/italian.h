#pragma once
#include "crust.h"
using namespace std;


class italian : public crust
{
private:
    enum herbs herb;
    enum cookstyle cook;
    bool olive_oil;

public:
    italian();
    void setsize(int);
    int getsize();
    double get_price();
    void set_price(double);
    string  get_description();
    void set_description(string);
    void setherbs(herbs);
    herbs getherbs();
    void setcookstyle(cookstyle);
    cookstyle getcookstyle();
    void setolive(bool);
    bool getolive();
    bool getgluten();
    void setgluten(bool);
    bool getthickthin();
    void setthickthin(bool);
};
