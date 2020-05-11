#pragma once
#include "Person.h"
#include "security.h"
#include "Order.h"
#include <string>
using namespace std;
class account : public Person, public security
{
	Order previous[5];
	string username;
	string password;
	string email;
	int saved;

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
};

