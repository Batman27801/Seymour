#pragma once
#include "flavours.h"
class tikka :
	public flavour
{
private:
    bool chicken;
    bool beef;
    bool Veg;
    static bool gluten;
    static int count;
public:
    tikka();
    double get_price();
    double set_price(double PRICE);
    char* get_description();
    char* set_description(char *desc);
    static bool get_gluten();
    bool get_chicken();
    void set_chicken(bool B);
    bool get_beef();
    void set_beef(bool B);
    ~tikka();

};

/*class tikka :
	public flavour
{
};*/

