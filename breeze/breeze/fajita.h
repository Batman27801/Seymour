#pragma once
#include "flavours.h"
class fajita :
	public flavour
{
private:
    bool chicken;
    bool beef;
    static  bool gluten;
    static int count;
public:
    fajita();
    double set_meat(char *choice);
    bool get_chicken();
    void set_chicken(bool B);
   bool get_beef();
    void set_beef(bool B);
    static bool get_gluten();
    char* get_Addon();
    ~fajita();
};

/*class fajita :
	public flavour
{
};*/
