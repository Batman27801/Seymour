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
	pizza();
	pizza(crust*, flavour*, Toping*);
	int getprice();
	void adjustpricing(int size);
};

