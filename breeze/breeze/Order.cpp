#include "Order.h"
#include<fstream>
Order::Order()
{
	bill = 0;
	FLAVOURS[0] = "tikka"; FLAVOURS[1] = "fajita"; FLAVOURS[2] = "chilli delight"; FLAVOURS[3] = "bbq_buzz"; FLAVOURS[4] = "seek kebab"; FLAVOURS[5] = "The cheese"; FLAVOURS[6] = "Veggie Delight";
	
}
void Order::TakeOrder(flavour *flav, int index)
{
	bill = bill+flav->get_price();
	fstream obj;
	obj.open("Reciept.txt", ios::in | ios::out | ios::app);
	obj << "Flavour = " << FLAVOURS[index] << " PIRCE = " << flav->get_price() << " \n" << endl;
	//obj << "..............................................TOTAL BILL = " << bill << endl;

}
double Order::ReturnBill()
{
	return bill;
}