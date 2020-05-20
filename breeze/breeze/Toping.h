#ifndef TOPING
#define TOPING

#include <iostream>
using namespace std;

enum quantityoftopings { Normal = 1, Extra = 2, Less = 3 };
class Toping
{
protected:
    double price;
    char details[1000];
    enum quantityoftopings quantity; //1 for Normal 2 For Extra 3 For Less
    char name[2000];

public:
    Toping();
    void setquantity(quantityoftopings);
    quantityoftopings getquantity();
    void setprice(double);
    virtual double getprice(void)=0;
    void setdetails(char[]);
    char* getdetails();
    char* getToppingName();
    void increaseprice(int size);

};
#endif