#pragma once
#include "crust.h"
#include "flavours.h"
#include "Toping.h"
class pizza
{
public:
	crust* cpoint;
	flavour* fpoint;
	Toping* tpoint;
	char FlavourMisc[30];
	char CrustMisc[30];
public:
	void SaveFlavour(flavour*ptr);
	void FlavourMiscSet(char choice[30]);
	void SaveCrust(crust* ptr);
	void CrustMiscSet(char choice[30]);
	void SaveToping(Toping* ptr);
	crust* getCrustPointer();
	flavour* getFlavourPointer();
	void setpricing(int size,flavour* ptr);
	void setpricing(int size, crust* ptr);
	void setpricing(int size, Toping* ptr);

};

