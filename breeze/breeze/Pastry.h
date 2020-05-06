#ifndef PASTRY
#define PASTRY
#include "Add_On.h"
enum flavors { Chocolate = 1, Strawberry = 2, Pineapple = 3, Cofee = 4 };
enum Sugar { White = 1, Brown = 2 };
class Pastry : public Add_On
{
    flavors flavor;
    Sugar sugar;

public:
    Pastry();
    ~Pastry();
    void setflavor(flavors);
    flavors getflavor();
    void setsugar(Sugar);
    Sugar getsugar();
    void setprice(double);
    double getprice();
};
#endif