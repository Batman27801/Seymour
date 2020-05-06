#ifndef PEPPERONI
#define PEPPERONI
#include <iostream>
using namespace std;
#include "Toping.h"
enum TypeofTopping { Vegan = 1, Non_Vegan = 2 };
enum QuantityOfmozzarellecheese { Usual = 1, More = 2, Little = 3, Not_Include = 4 };
class Pepperoni : public Toping
{
private:
    float price;
    string details;
    enum TypeofTopping Type;
    QuantityOfmozzarellecheese QOFMC;

public:
    Pepperoni();
    ~Pepperoni();
    void setprice(float);
    float getprice();
    void setInform(string);
    void Information();
    void setType(TypeofTopping);
    TypeofTopping getType();
    void setQOFMC(int);
    int getQOFMC();

};
#endif