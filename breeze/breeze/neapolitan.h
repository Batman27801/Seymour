#pragma once
#include "crust.h"
//using namespace std;

class neapolitan : public crust
{
private:
    enum cookstyle cook;
    bool essence;               //sunflower oil essencce
    bool hand;

public:
    neapolitan();
    void setessence(bool);
    bool getessence();
    void sethand(bool);
    bool gethand();
    void setcookstyle(cookstyle);
    cookstyle getcookstyle();
    void Hello();
};

