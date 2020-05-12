#ifndef TOPING
#define TOPING

#include <iostream>
using namespace std;

enum quantityoftopings { Normal = 1, Extra = 2, Less = 3 };
class Toping
{
protected:
    double price;
    string details;
    enum quantityoftopings quantity; //1 for Normal 2 For Extra 3 For Less

public:
    Toping();
    ~Toping();
    void setquantity(quantityoftopings);
    quantityoftopings getquantity();
    void setprice(double);
    double getprice(void);
    void setdetails(string);
    string getdetails();

    virtual void initialize() = 0;
};
#endif