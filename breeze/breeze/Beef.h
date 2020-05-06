#ifndef BEEF
#define BEEF

#include "Toping.h"
#include <iostream>
using namespace std;
enum peppers { Green = 1, Red = 2 };
class Beef : public Toping
{
private:
    float price;
    string details;
    bool Cloves_Spice;
    peppers pepper;

public:
    Beef();
    ~Beef();
    void setprice(float);
    float getprice();
    void Information();
    void setInform(string);
    void setCS(bool);
    bool getCS();
    void setpepper(int);
    int getpepper();
};
#endif