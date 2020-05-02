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

class fajita :
    public flavour
{
private:
    bool chicken;
    bool beef;
    bool Veg;
    static  bool gluten;
    static int count;
public:
    fajita();
    double get_price();
    double set_price();
    char* get_description();
    char* set_description();
    static bool get_gluten();
    ~fajita();
};

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
    double set_price();
    char* get_description();
    char* set_description();
    static bool get_gluten();
    ~tikka();
};

class chilli_delight :
    public flavour
{
private:
    bool chicken;
    bool beef;
    bool Veg;
    static bool gluten;
    static int count;
public:
    chilli_delight();
    double get_price();
    double set_price();
    char* get_description();
    char* set_description();
    static bool get_gluten();
    ~chilli_delight();
};

class bbq_buzz :
    public flavour
{
private:
    bool chicken;
    bool beef;
    bool Veg;
    static  bool gluten;
    static int count;
public:
    bbq_buzz();
    double get_price();
    double set_price();
    char* get_description();
    char* set_description();
    static bool get_gluten();
    ~bbq_buzz();
};

class seekh_kebab :
    public flavour
{
private:
    bool chicken;
    bool beef;
    bool Veg;
    static bool gluten;
    static int count;
public:
    seekh_kebab();
    double get_price();
    double set_price();
    char* get_description();
    char* set_description();
    static bool get_gluten();
    ~seekh_kebab();
};

class The_cheese :
    public flavour
{
private:
    bool chicken;
    bool beef;
    bool Veg;
    static bool gluten;
    static int count;
public:
    The_cheese();
    double get_price();
    double set_price();
    char* get_description();
    char* set_description();
    static bool get_gluten();
    ~The_cheese();
};

class veggie_delight :
    public flavour
{
private:
    bool chicken;
    bool beef;
    bool Veg;
    static bool gluten;
    static int count;
public:
    veggie_delight();
    double get_price();
    double set_price();
    char* get_description();
    char* set_description();
    static bool get_gluten();
    ~veggie_delight();
};


