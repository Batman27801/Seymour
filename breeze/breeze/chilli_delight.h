#pragma once
#include "flavours.h"
class chilli_delight :
	public flavour
{
private:
    bool chicken;
    bool red;bool green;
    static bool gluten;
    static int count;
public:
    chilli_delight();
    double get_price();
    double set_price(double PRICE);
    char* get_description();
    char* set_description(char* desc);
    void get_chilli(char *choice);
    static bool get_gluten();
    ~chilli_delight();
};

/*class chilli_delight :
	public flavour
{
};*/

