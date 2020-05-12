#pragma once
#include "crust.h"
using namespace std;

class newyork : public crust
{
private:
    enum herbs herb;
    bool mineralized;

public:
    newyork();
    void setherbs(herbs);
    herbs getherbs();
    void setmineralized(bool);
    bool getmineralized();
    void Hello();
};