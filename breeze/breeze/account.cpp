#pragma once
#include "account.h"
#include <fstream>

using namespace std;
account::account()
{
	saved = 0;
	username = "";
	password = "";
	email = "";
}
Order* account::getprevious()
{
	return previous;
}
void account::setprevious(Order& newest)
{
	for (int i = 4; i > 0; i--)
	{
		previous[i] = previous[i - 1];
	}
	previous[0] = newest;
}
string account::getusername()
{
	return username;
}
void account::setusername(string s)
{
	username = s;
}
string account::getpassword()
{
	return password;
}
void account::setpassword(string p)
{
	password = p;
}
string account::getemail()
{
	return email;
}
void account::setemail(string e)
{
	email = e;
}
bool account::import(string user, string pass)
{
	account temp;
	bool val=false;
	fstream accountsfile("accountdata.dat", ios::in | ios::binary);
	for (; accountsfile.read((char*)&temp, sizeof(temp)) ;)
	{
		if (temp.getusername() == user && temp.getpassword() == pass)
		{
			val = true;
			*this = temp;
			break;
		}

	}

	accountsfile.close();
	return val;
}