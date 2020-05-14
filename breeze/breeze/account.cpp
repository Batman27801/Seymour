#pragma once
#include "account.h"
#include <fstream>

using namespace std;
account::account()
{
	saved = 0;
	strcpy_s(username, "");
	strcpy_s(password, "");
	strcpy_s(email, "");
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
	strcpy_s(username, s.c_str());
}
string account::getpassword()
{
	return password;
}
void account::setpassword(string p)
{
	strcpy_s(username, p.c_str());
}
string account::getemail()
{
	return email;
}
void account::setemail(string e)
{
	strcpy_s(username, e.c_str());
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