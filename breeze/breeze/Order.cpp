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
	int i,j,k;
	bill = bill + pizza->fpoint->get_price()+pizza->cpoint->get_price();
	fstream obj;
	obj.open("Reciept.txt", ios::in | ios::out | ios::app);
	for (i = 0; i < 7; i++)
	{
		if (strcmp(FLAVOURS[i],pizza->fpoint->get_FlavName())==0)
		{
			strcpy_s(SelectedFlavour, pizza->fpoint->get_FlavName());
			strcpy_s(SelectedFlavourMisc, pizza->FlavourMisc);
			obj << "Flavour = " << FLAVOURS[i] << " PRICE = Rs " << pizza->fpoint->get_price() << " With Misc = " <<pizza->FlavourMisc <<endl;
		}
	}
	for (j = 0; j < 8; j++)
	{
		if(strcmp(CRUSTS[j],pizza->cpoint->get_CrustName()))
		{
			strcpy_s(SelectedCrust, pizza->cpoint->get_CrustName());
			strcpy_s(SelectedCrustMisc,pizza->CrustMisc);
			obj << "Crust = " << CRUSTS[j] << " PRICE = Rs " << pizza->cpoint->get_price() << " With Misc = " <<pizza->CrustMisc <<endl;
		}
	}
	/*for (k = 0; k < 5; k++)
	{
		if (strcmp(TOPPINGS[j], pizza->tpoint->getToppingName()))
		{
			strcpy_s(SelectedTopping, pizza->tpoint->getToppingName());
			obj << "Topping = " << TOPPINGS[k] << pizza->tpoint->getprice() << endl;
		}
	}*/
	obj << "..............................................TOTAL BILL = " << bill << endl;
	obj.close();

}
double Order::ReturnBill()
{
	return bill;
}
void Order::FileOrder()
{
	fstream f;
	f.open("Orders.dat", ios::out | ios::app | ios::binary);
	f.write(reinterpret_cast<char*>(&*this), sizeof(*this));
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