#ifndef ICE_CREAM
#define ICE_CREAM

#include "Add_On.h"
enum IC_flavors { Vanilla = 1, Mint_Chocolate_Chip = 2, Strawbery = 3, Cookie_Dough = 4, Banana_Nut = 5 };
class Ice_Cream : public Add_On
{
    IC_flavors IF;
    bool Dry_Fruit_Topping;


public:
    Ice_Cream();
    ~Ice_Cream();
    void setIF(IC_flavors);
    IC_flavors getIF();
    void setDFT(bool);
    bool getDFT();
    void setprice(double);
    double getprice();

};
#endif