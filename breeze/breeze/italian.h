#pragma once
#include "crust.h"
using namespace std;


class italian : public crust
{
private:
    enum herbs herb;
    enum cookstyle cook;

public:
    italian();
    void setsize(int);
    void setherbs(herbs);
    herbs getherbs();
    void setcookstyle(cookstyle);
    cookstyle getcookstyle();
};
