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
    bool get_chicken();
    void set_chicken(bool B);
    bool get_beef();
    void set_beef(bool B);
    static bool get_gluten();
    char* get_Addon();
    void set_meat(char* choice);
    ~seekh_kebab();

};

