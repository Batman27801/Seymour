#include "flavours.h"
#include"iostream"
bool fajita::gluten = true;
int fajita::count = 0;
bool tikka::gluten = false;
int tikka::count = 0;
bool::chilli_delight::gluten = false;
int chilli_delight::count = 0;
bool bbq_buzz::gluten = true;
int bbq_buzz::count = 0;
bool seekh_kebab::gluten = true;
int seekh_kebab = 0;
bool The_cheese::gluten = false;
int The_cheese::count = 0;
bool veggie_delight::gluten = false;
int veggie_delight::count = 0;

fajita::fajita()
{
    price = 1349.99;
    description = new char[230];
    description = "contains an epic blend of cheese with authentic fresh chicken meat.Contains traces of gluten";
    chicken = true;
    Veg = false;
    //gluten=false;
    beef = false;
    count++;
}
double fajita::get_price()
{
	return price;
}
double fajita::set_price()
{
	std::cin >> price;
}
char* fajita::get_description()
{
	return description;
}
char* fajita::set_description()
{
	std::cin >> description;
}
bool fajita::get_gluten()
{
	return gluten;
}
fajita::~fajita()
{
    delete[] description;
}
tikka::tikka()
{
    price = 1259.99;
    description = new char[230];
    description = "A specially developed recipe  topped with spicy  tikka boti & onions. Gluten Free.";
    chicken = true;
    Veg = false;
    //gluten=false;
    beef = false;
    count++;
}
bool tikka::get_gluten()
{
    return gluten;
}
double tikka::get_price()
{
    return price;
}
double tikka::set_price()
{
    std::cout << "Enter the updated price " << std::endl;
    std::cin >> price;
    return  0;
}
char* tikka::get_description()
{
    return description;
}
char* tikka::set_description()
{
    std::cout << "Enter the updated flavour description" << std::endl;
    std::cin >> description;
    return  0;
}
tikka::~tikka()
{
    delete[] description;
}
chilli_delight::chilli_delight()
{
    price = 1100;
    description = new char[230];
    description = "Fire up your taste buds with spicy chicken chunks, onions, olives, jalapenos and hot peri sauce. Gluten free.";
    chicken = true;
    Veg = false;
    //gluten=false;
    beef = false;
    count++;
}
bool chilli_delight::get_gluten()
{
    return gluten;
}
double chilli_delight::get_price()
{
    return price;
}
double chilli_delight::set_price()
{
    std::cout << "Enter the updated price " << std::endl;
    std::cin >> price;
    return  0;
}
char* chilli_delight::get_description()
{
    return description;
}
char* chilli_delight::set_description()
{
    std::cout << "Enter the updated flavour description" << std::endl;
    std::cin >> description;
    return  0;
}
chilli_delight::~chilli_delight()
{
    delete[] description;
}
bbq_buzz::bbq_buzz()
{
    price = 1100;
    description = new char[230];
    description = "Smoked chicken, capsicum, onions and black olives, sweet and smoky BBQ sauce. Contains gluten in significant amounts";
    chicken = true;
    Veg = false;
    beef = false;
    count++;
}
bool bbq_buzz::get_gluten()
{
    return gluten;
}
double bbq_buzz::get_price()
{
    return price;
}
double bbq_buzz::set_price()
{
    std::cout << "Enter the updated price " << std::endl;
    std::cin >> price;
    return  0;
}
char* bbq_buzz::get_description()
{
    return description;
}
char* bbq_buzz::set_description()
{
   std:: cout << "Enter the updated flavour description" << std::endl;
    std::cin >> description;
    return  0;
}
bbq_buzz::~bbq_buzz()
{
    delete[] description;
}
seekh_kebab::seekh_kebab()
{
    price = 1400;
    description = new char[230];
    description = "Topped with seekh kabab chunks on tantalizing blend of spicy chicken, onions capsicum, green pepper and cheese. Contains gluten in significant amounts";
    chicken = true;
    Veg = false;
    beef = true;
    count++;
}
bool seekh_kebab::get_gluten()
{
    return gluten;
}
double seekh_kebab::get_price()
{
    return price;
}
double seekh_kebab::set_price()
{
    std::cout << "Enter the updated price " << std::endl;
    std::cin >> price;
    return  0;
}
char* seekh_kebab::get_description()
{
    return description;
}
char* seekh_kebab::set_description()
{
   std:: cout << "Enter the updated flavour description" << std::endl;
    std::cin >> description;
    return  0;
}
seekh_kebab::~seekh_kebab()
{
    delete[] description;
}
The_cheese::The_cheese()
{
    price = 1400;
    description = new char[230];
    description = "Go back to where it all began with classic mozzarella cheese & tomato base. Gluten free";
    chicken = false;
    Veg = false;
    beef = false;
    count++;
}
bool The_cheese::get_gluten()
{
    return gluten;
}
double The_cheese::get_price()
{
    return price;
}
double The_cheese::set_price()
{
    std::cout << "Enter the updated price " << std::endl;
    std::cin >> price;
    return  0;
}
char* The_cheese::get_description()
{
    return description;
}
char* The_cheese::set_description()
{
    std:: cout << "Enter the updated flavour description" << std::endl;
    std::cin >> description;
    return 0;
}
The_cheese::~The_cheese()
{
    delete[] description;
}
veggie_delight::veggie_delight()
{
    price = 1000;
    description = new char[230];
    description = "A colorful medley of tomatoes, onions, mushrooms, black olives, and green peppers. Gluten free";
    chicken = false;
    Veg = true;
    gluten = false;
    beef = false;
    count++;
}
bool veggie_delight::get_gluten()
{
    return gluten;
}
double veggie_delight::get_price()
{
    return price;
}
double veggie_delight::set_price()
{
   std:: cout << "Enter the updated price " << std::endl;
   std:: cin >> price;
    return 0;
}
char* veggie_delight::get_description()
{
    return description;
}
char* veggie_delight::set_description()
{
   std:: cout << "Enter the updated flavour description" << std::endl;
    std::cin >> description;
    return 0;
}
veggie_delight::~veggie_delight()
{
    delete[] description;
}