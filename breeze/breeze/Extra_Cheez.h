#ifndef EXTRA_CHEEZ
#define EXTRA_CHEEZ
#include "Toping.h"
#include <iostream>
using namespace std;
enum Extras { Macroni = 1, Cheese = 2 };
class Extra_Cheez : public Toping
{
private:
    float price;
    string details;
    bool Red_Pepper_Flakes;
    Extras Extra;


public:
    Extra_Cheez();
    ~Extra_Cheez();
    void setprice(float);
    float getprice();
    string getdetails();
    void setdetails(string);
    void setRPF(bool);
    bool getRPF();
    void setExtra(Extras);
    Extras getExtra();
};
#endif