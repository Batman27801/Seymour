#ifndef CHICKEN
#define CHICKEN
#include "Toping.h"
#include <iostream>
using namespace std;
enum Cheeses { Shredded_Parmesan = 1, Shredded_Cheddar = 2 };
class Chicken : public Toping
{
private:
    float price;
    string details;
    Cheeses Cheese;
    bool BBQ_Sause;

public:
    Chicken();
    ~Chicken();
    void setprice(float);
    float getprice();
    string getdetails();
    void setdetails(string);
    void setCheese(int);
    int getCheese();
    void setBS(bool);
    bool getBS();
};
#endif