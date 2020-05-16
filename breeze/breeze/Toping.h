#ifndef TOPING
#define TOPING

#include <iostream>
using namespace std;

enum quantityoftopings { Normal = 1, Extra = 2, Less = 3 };
class Toping
{
protected:
    double price;
    char details[100];
    enum quantityoftopings quantity; //1 for Normal 2 For Extra 3 For Less
    char name[20];

public:
    Toping();
    void setquantity(quantityoftopings);
    quantityoftopings getquantity();
    void setprice(double);
    double getprice(void);
    void setdetails(string);
    string getdetails();
    string getToppingName();
    virtual void initialize() = 0;
};
#endif