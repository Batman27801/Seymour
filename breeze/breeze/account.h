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

public:
	account();
	Order* getprevious();
	void setprevious(Order&);
	string getusername();
	void setusername(string);
	string getpassword();
	void setpassword(string);
	string getemail();
	void setemail(string);
	bool import(string,string);
	bool getguest();
	void setguest(bool);
};

