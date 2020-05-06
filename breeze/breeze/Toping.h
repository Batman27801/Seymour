#ifndef TOPING
#define TOPING

#include <iostream>
using namespace std;

enum quantityoftopings { Normal = 1, Extra = 2, Less = 3 };
class Toping
{
protected:
    enum quantityoftopings quantity; //1 for Normal 2 For Extra 3 For Less

public:
    Toping(float);
    Toping();
    ~Toping();
    void setquantity(quantityoftopings);
    quantityoftopings getquantity();
    virtual void setprice(float) = 0;
    virtual float getprice(void) = 0;
    virtual void setInform(string) = 0;
};
#endif