#ifndef CHEF
#define CHEF
#include "Staaf.h"
#include "Order.h"
class chef : public Staaf
{
    long int workingOrder;
public:
    Order O;
    chef();
    bool setID(string);
    bool setPass(string);
    bool addworkingorder();
    long int getworkingorder();
    bool setorderasmaking();
    bool setorderready();
};
#endif