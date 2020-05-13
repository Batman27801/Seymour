#include "Order.h"
#include<fstream>
using namespace std;
Order::Order()
{
	bill = 0;
	FLAVOURS[0] = "tikka"; FLAVOURS[1] = "fajita"; FLAVOURS[2] = "chilli delight"; FLAVOURS[3] = "BBQ buzz"; FLAVOURS[4] = "seekh kebab"; FLAVOURS[5] = "The cheese"; FLAVOURS[6] = "Veggie Delight";
	ADDONS[0] = "Beef"; ADDONS[1] = "Chicken";
}
void Order::TakeOrder(flavour *flav)
{
	int i;
	bill = bill+flav->get_price();
	fstream obj;
	obj.open("Reciept.txt", ios::in | ios::out | ios::app);
	for (i = 0; i < 7; i++)
	{
		if (FLAVOURS[i] == flav->get_FlavName())
		{
			obj << "Flavour = " << FLAVOURS[i] << " PIRCE = " << flav->get_price() << " \n" << endl;
		}
	}
	
	//obj << "..............................................TOTAL BILL = " << bill << endl;

}
double Order::ReturnBill()
{
	return bill;
}
double Order::MiscCal(double AddOn_Price,flavour *ptr)
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
}