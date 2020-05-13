#include"flavours.h"
char* flavour::get_FlavName()
{
	return name;
}
double flavour::get_price()
{
	return price;
}
double  flavour::set_price(double PRICE)
{
	price = PRICE;
	return 0;
}
char* flavour::get_description()
{
	return description;
}
char* flavour::set_description(char* desc)
{
	description = desc;
	return 0;
}
