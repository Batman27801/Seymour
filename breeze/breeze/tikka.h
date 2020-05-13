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
    static bool get_gluten();
    bool get_chicken();
    double set_chicken(bool B);
    bool get_beef();
    double set_beef(bool B);
    char* get_Addon();
    ~tikka();

};

/*class tikka :
	public flavour
{
};*/

