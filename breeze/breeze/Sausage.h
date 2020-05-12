#ifndef SAUSAGE
#define SAUSAGE
#include "Toping.h"
#include <iostream>
using namespace std;
class Sausage : public Toping
{
private:
    bool Basil_Scattering;
    bool Red_Pepper_Flakes;


public:
    Sausage();
    ~Sausage();
    void initialize();
    void setRPF(bool);
    bool getRPF();
    void setBS(bool);
    bool getBS();

};
#endif