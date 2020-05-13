#pragma once
class flavour
{
protected:
    double price;
    char* description;
    char* name;
public:
    double  get_price() ;
     double  set_price(double PRICE) ;
      char*  get_description() ;
     char* set_description(char* desc) ;
    char* get_FlavName();
    virtual char* get_Addon() = 0;
};
