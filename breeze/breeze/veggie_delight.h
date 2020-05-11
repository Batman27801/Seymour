#pragma once
#include "flavours.h"
class veggie_delight :
	public flavour
{
private:
    static bool gluten;
    static int count;
public:
    veggie_delight();
    double get_price();
    double set_price(double PRICE);
    char* get_description();
    char* set_description(char *desc);
    static bool get_gluten();
    char* get_Addon();
    ~veggie_delight();
};

