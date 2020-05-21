#pragma once
#include "crust.h"
#include "flavours.h"
#include "Toping.h"
class pizza
{
protected:
	int final_price;
public:
	crust* cpoint;
	flavour* fpoint;
	Toping* tpoint;

	/*char FlavourMisc[30];
	char CrustMisc[30];*/

	pizza();
	pizza(crust*, flavour*, Toping*);
	int getprice();
	void adjustpricing(int size);
	//void SaveFlavour(flavour*ptr);
	//void SaveCrust(crust* ptr);
	//void SaveToping(Toping* ptr);
	//crust* getCrustPointer();
	//flavour* getFlavourPointer();
	//void FlavourMiscSet(char choice[30]);
	//void CrustMiscSet(char choice[30]);
	

};

