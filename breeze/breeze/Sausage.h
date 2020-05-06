#ifndef SAUSAGE
#define SAUSAGE
#include "Toping.h"
#include <iostream>
using namespace std;
class Sausage : public Toping
{
private:
    float price;
    string details;
    bool Basil_Scattering;
    bool Red_Pepper_Flakes;


public:
    Sausage();
    ~Sausage();
    void setprice(float);
    float getprice();
    void Information();
    void setInform(string);
    void setRPF(bool);
    bool getRPF();
    void setBS(bool);
    bool getBS();

};
#endif