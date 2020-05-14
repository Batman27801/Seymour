#include "Order.h"
#include<fstream>
#include<string.h>
using namespace std;
Order::Order()
{
	bill = 0;
}
void Order::PlaceOrder(pizza *pizza)
{
	int i;
	bill = bill + pizza->fpoint->get_price();
	fstream obj;
	obj.open("Reciept.txt", ios::in | ios::out | ios::app);
	for (i = 0; i < 7; i++)
	{
		if (strcmp(FLAVOURS[i],pizza->fpoint->get_FlavName())==0)
		{
			obj << "Flavour = " << FLAVOURS[i] << " PIRCE = " << pizza->fpoint->get_price() << " \n" << endl;
		}
	}
	obj.close();
	fstream f;
	f.open("Orders.dat", ios::out | ios::app | ios::binary);
	f.write(reinterpret_cast<char*>(&*this), sizeof(*this));
	
	//obj << "..............................................TOTAL BILL = " << bill << endl;

}
double Order::ReturnBill()
{
	return bill;
}
/*double Order::MiscCal(double AddOn_Price,flavour *ptr)
{
	int i;
	bill = bill + AddOn_Price;
	fstream obj;
	obj.open("Reciept.txt", ios::in | ios::out | ios::app);
	for(i=0;i<2;i++)
	{
		if (ADDONS[i] == ptr->get_Addon())
		{
			obj << "With Addon = " << ADDONS[i] << " PIRCE = " << AddOn_Price << " \n" << endl;
		}
	}
	
	return 0;
}*/