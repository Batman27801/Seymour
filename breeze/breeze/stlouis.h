#pragma once
#include <iostream>
#include "crust.h"
using namespace std;

class stlouis : public crust
{
private:
    bool cheese;
    bool tavern;

public:
    stlouis();
    void setcheese(bool);
    bool getcheese();
    bool gettavern();
    void settavern(bool);
    void Hello();
};