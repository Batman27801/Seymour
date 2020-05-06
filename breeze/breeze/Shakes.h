#ifndef SHAKES
#define SHAKES
#include "Add_On.h"

enum shakeflavors { Banana = 1, Orange = 2, Mango = 3, Oreo = 4, Peach = 5 };

class Shakes : public Add_On
{
    shakeflavors SF;
    bool sugar;

public:
    Shakes();
    ~Shakes();
    void setSF(shakeflavors);
    shakeflavors getSF();
    void setsugar(bool);
    bool getsugar();
    void setprice(double);
    double getprice();

};
#endif