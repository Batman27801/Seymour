#pragma once
class flavour
{
protected:
    double price;
    char* description;
public:
    double virtual get_price() = 0;
     double virtual set_price() = 0;
     virtual char*  get_description() = 0;
    virtual char* set_description() = 0;
};
