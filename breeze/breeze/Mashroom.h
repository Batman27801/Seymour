#ifndef MASHROOM
#define MASHROOM

#include "Toping.h"
#include <iostream>
using namespace std;
class Mashroom : public Toping
{
private:
    bool Creamy_Rosted_Garlic_Sause;
    bool Creamlized_Onion;

public:
    Mashroom();
    ~Mashroom();
    void initialize();
    void setCRGS(bool);
    void setCO(bool);
    bool getCRGS();
    bool getCO();
};
#endif