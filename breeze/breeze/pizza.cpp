#include "pizza.h"
void pizza::SaveFlavour(flavour* ptr)
{
	fpoint = ptr;
}
void pizza::MiscCal(char desc[30], double price)
{
	strcpy_s(FlavourMisc, desc);
	FlavourMiscPrice = price;
}
