#include "pizza.h"
void pizza::SaveFlavour(flavour* ptr)
{
	fpoint = ptr;
}
void pizza::FlavourMiscCal(char desc[30])
{
	strcpy_s(FlavourMisc, desc);
	
}
