#ifndef COLD_DRINK
#define COLD_DRINK

#include "Add_On.h"

enum Brands { Sting = 1, Pepsi = 2, Coca_cola = 3, Fanta = 4, Sprite = 5 };
class Cold_Drink : public Add_On
{
    bool diet;
    Brands Brand;

public:
    Cold_Drink();
    ~Cold_Drink();
    void setdiet(bool);
    bool getdiet();
    void setBrand(Brands);
    Brands getBrand();
    void setprice(double);
    double getprice();

};
#endif