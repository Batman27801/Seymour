#pragma once
#include "flavours.h"
class The_cheese :
	public flavour
{
private:
    bool mozarella;
    bool cheddar;
    bool gouda;
    bool peperroni; bool sausage;
    //bool Veg;
    static bool gluten;
    static int count;
public:
    The_cheese();
    double get_price();
    double set_price(double PRICE);
    char* get_description();
    void set_cheese(char* choice);
    void set_mozarella(bool B);
    void set_cheddar(bool B);
    void set_gouda(bool B);
    void set_pepperoni(bool B);
    void set_sausage(bool B);
    bool get_mozarella();
    bool get_cheddar();
    bool get_gouda();
    bool get_pepperoni();
    bool get_sausage();


    void set_meat(char* choice);
    char* set_description(char *desc);
    static bool get_gluten();
    ~The_cheese();
};

