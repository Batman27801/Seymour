#include "pizza.h"
void pizza::SaveFlavour(flavour* ptr)
{
	fpoint = ptr;
}
void pizza::FlavourMiscSet(char desc[30])
{
	strcpy_s(FlavourMisc, desc);
	
}
void pizza::SaveCrust(crust* ptr)
{
	cpoint = ptr;
}
void pizza::CrustMiscSet(char desc[30])
{
	strcpy_s(CrustMisc, desc);
}
void pizza::SaveToping(Toping* ptr)
{
	tpoint = ptr;
}
void pizza::setpricing(int size, flavour* ptr)
{
	ptr->increaseprice(size);
}
void pizza::setpricing(int size, crust* ptr)
{
	ptr->setsize(size);
}
void pizza::setpricing(int size, Toping* ptr)
{
	ptr->increaseprice(size);
}
crust* pizza::getCrustPointer()
{
	return cpoint;
}
flavour* pizza::getFlavourPointer()
{
	return fpoint;
}