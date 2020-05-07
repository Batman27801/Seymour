#ifndef MASHROOM
#define MASHROOM

#include "Toping.h"
#include <iostream>
using namespace std;
class Mashroom : public Toping
{
private:
    float price;
    string details;
    bool Creamy_Rosted_Garlic_Sause;
    bool Creamlized_Onion;

public:
    Mashroom();
    ~Mashroom();
    void setprice(float);
    float getprice();
    string getdetails();
    void setdetails(string);
    void setCRGS(bool);
    void setCO(bool);
    bool getCRGS();
    bool getCO();
};
#endif