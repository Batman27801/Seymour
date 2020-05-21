#pragma once
#include "Person.h"
#include "security.h"
#include "Order.h"
#include <string>
using namespace std;
class account : public Person, public security
{
	Order previous[5];
	char username[15];
	char password[30];
	char email[30];
	int saved;
	bool guest;
	int Current_Pos;

public:
	account();
	Order* getprevious();
	void setprevious(Order&);
	char* getusername();
	bool setusername(string);
	char* getpassword();
	bool setpassword(string);
	int getCurrentPos();
	void SaveChanges(const Order *ptr);
	char* getemail();
	bool setemail(string);
	bool import(string,string);
	bool getguest();
	void setguest(bool);
	bool checkavailable(string);
	void writetofile();
};

