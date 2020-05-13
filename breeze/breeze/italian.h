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
    void setherbs(herbs);
    herbs getherbs();
    void setcookstyle(cookstyle);
    cookstyle getcookstyle();
    void setolive(bool);
    bool getolive();
    void Hello();
};
