#pragma once
class flavour
{
protected:
    double price;
    char* description;
    char* name;
public:
    flavour(char* flavname)
    {
        char* name = new char[230];
        name = flavname;
    }
    double virtual get_price() = 0;
    double virtual set_price() = 0;
    virtual char*  get_description() = 0;
    virtual char* set_description() = 0;
    char* get_name()
    {
        return name;
    }
};

