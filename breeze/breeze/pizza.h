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
	double FlavourMiscPrice = 0;
public:
	void SaveFlavour(flavour*ptr);
	void FlavourMiscCal(char choice[30]);
};

