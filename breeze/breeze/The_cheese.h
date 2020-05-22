#pragma once
#include "flavours.h"
class The_cheese :
	public flavour
{
private:
    bool mozarella;
    bool cheddar;
    bool gouda;
     //bool Veg;
    static bool gluten;
    static int count;
public:
    The_cheese();
    double set_cheese(char choice[30]);
    void set_mozarella(bool B);
    void set_cheddar(bool B);
    void set_gouda(bool B);
    bool get_mozarella();
    bool get_cheddar();
    bool get_gouda();
    char* get_Addon();
    static bool get_gluten();
};

