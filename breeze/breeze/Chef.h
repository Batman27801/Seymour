#ifndef CHEF
#define CHEF
#include "Staaf.h"
class chef : public Staaf
{
    long int workingOrder;
public:
    chef();
    bool setID(string);
    bool setPass(string);
    void setworkingorder(long int);
    long int getworkingorder();
};
#endif