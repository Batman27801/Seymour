#ifndef ADD_ON
#define ADD_ON
#include <iostream>
using namespace std;

class Add_On
{
protected:
    double price;
    double total_amount;
    int quantity;

public:
    Add_On();
    ~Add_On();
    virtual void setprice(double) = 0;
    virtual double getprice() = 0;
    void setquantity(int);
    int getquantity();
    double calcTA();
};
#endif