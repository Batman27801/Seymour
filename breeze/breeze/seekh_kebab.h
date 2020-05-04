#pragma once
#include "flavours.h"
class seekh_kebab :
	public flavour
{
private:
    bool chicken;
    bool beef;
    static bool gluten;
    static int count;
public:
    seekh_kebab();
    double get_price();
    double set_price(double PRICE);
    char* get_description();
    bool get_chicken();
    void set_chicken(bool B);
    bool get_beef();
    void set_beef(bool B);
    char* set_description(char* desc);
    static bool get_gluten();
    ~seekh_kebab();

};

