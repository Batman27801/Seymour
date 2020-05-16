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
