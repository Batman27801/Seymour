#include "Add_On.h"

Add_On::Add_On() : total_amount(0), price(0), quantity(0) {}
Add_On::~Add_On()
{
    cout << endl;
}
void Add_On::setquantity(int q)
{
    quantity = q;
}
int Add_On::getquantity()
{
    return quantity;
}
double Add_On::calcTA()
{
    total_amount = price * quantity;
    return total_amount;
}