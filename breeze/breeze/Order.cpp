#include "Order.h"
#include<fstream>
#include<string.h>
using namespace std;
Order::Order()
{
	int i,j;
	bill = 0;
	for (i = 0; i < 5; i++)
	{
		strcpy_s(CRUSTS[i], "");
		strcpy_s(FLAVOURS[i], "");
		strcpy_s(TOPPINGS[i], "");
	}
	
}
void Order::PlaceOrder(pizza* pizza, int pizzaamount)
{
	int i;
	for (i = 0; i < pizzaamount; i++)
	{
		bill = bill + (pizza+i)->getprice();
		strcpy_s(FLAVOURS[i], (pizza + i)->fpoint->get_FlavName());
		strcpy_s(CRUSTS[i], (pizza + i)->cpoint->get_CrustName());
		strcpy_s(TOPPINGS[i], (pizza + i)->tpoint->getToppingName());
	}
	fstream yourorder("Receipt.txt", ios::in | ios::out | ios::app);
	yourorder << "Total pizzas ordered: " << pizzaamount <<endl;
	for (i = 0; i < pizzaamount; i++)
	{
		yourorder << "Pizza Number " << i + 1 <<endl;
		yourorder << CRUSTS[i] << " With the Flavor " << FLAVOURS[i] << " topped with a layering of " << TOPPINGS[i] << " ." <<endl;
	}
	yourorder << "Total Billed Amount is: Rs " << bill <<endl <<endl;
	yourorder << "X----------------------------------------------------X" << endl;
	yourorder.close();
	orderstatus = confirmed;
}
//void Order::PlaceOrder(pizza *pizza)
//{
//	int i,j;
//	bill = bill + pizza->fpoint->get_price()+pizza->cpoint->get_price();
//	fstream obj;
//	obj.open("Reciept.txt", ios::in | ios::out | ios::app);
//	for (i = 0; i < 7; i++)
//	{
//		if (strcmp(FLAVOURS[i],pizza->fpoint->get_FlavName())==0)
//		{
//			strcpy_s(SelectedFlavour, pizza->fpoint->get_FlavName());
//			obj << "Flavour = " << FLAVOURS[i] << " PRICE = Rs " << pizza->fpoint->get_price() <<endl;
//		}
//	}
//	for (j = 0; j < 8; j++)
//	{
//		if(strcmp(CRUSTS[j],pizza->cpoint->get_CrustName()))
//		{
//			strcpy_s(SelectedCrust, pizza->cpoint->get_CrustName());
//			obj << "Crust = " << CRUSTS[j] << " PRICE = Rs " << pizza->cpoint->get_price() <<endl;
//		}
//	}
//	/*for (k = 0; k < 5; k++)
//	{
//		if (strcmp(TOPPINGS[j], pizza->tpoint->getToppingName()))
//		{
//			strcpy_s(SelectedTopping, pizza->tpoint->getToppingName());
//			obj << "Topping = " << TOPPINGS[k] << pizza->tpoint->getprice() << endl;
//		}
//	}*/
//	obj << "..............................................TOTAL BILL = " << bill << endl;
//	obj.close();
//
//}
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
void Order::operator=(const Order& obj)
{
	this->bill = obj.bill;
	for (int i = 0; i < 5; i++)
	{
		strcpy_s(FLAVOURS[i], obj.FLAVOURS[i]);
		strcpy_s(CRUSTS[i], obj.CRUSTS[i]);
		strcpy_s(TOPPINGS[i], obj.TOPPINGS[i]);
	}
	this->OrderCode = obj.OrderCode;
}
void Order::operator-(const double DiscAmount)
{
	double TempDisc = DiscAmount;
	double TempBill = bill;
	TempBill = TempBill - (TempBill * (TempDisc / 100));
	bill = TempBill;
}
void Order::setOrderCode(long int OrderCode)
{
	this->OrderCode = OrderCode;
}
void Order::setstatus(enum status stat)
{
	orderstatus = stat;
}
enum status Order::getstatus()
{
	return orderstatus;
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