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
	guest = false;
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
char* account::getusername()
{
	return username;
}
bool account::setusername(string s)
{
	try {
		if (s.length()>=6 && s.length() < 15 && checkavailable(s))
		{
			strcpy_s(username, s.c_str());
			return true;
		}
		else
			throw 1;

	}
	catch (int)
	{
		strcpy_s(username, "");
		return false;
	}
}
char* account::getpassword()
{
	return password;
}
bool account::setpassword(string p)
{
	try {
		if (p.length() >= 8 && p.length() < 30)
		{
			strcpy_s(password, p.c_str());
			return true;
		}
		else
			throw 1;
	}
	catch (int)
	{
		strcpy_s(password, "");
		return false;
	}
}
char* account::getemail()
{
	return email;
}
bool account::setemail(string s)
{
	s == "" ? (s = "               ") : ("");
	try {
		int n = s.length();
		if (s[n-1] == 'm' && s[n - 2] == 'o' && s[n - 3] == 'c' && s[n - 4] == '.' && (s[n - 10] == '@' || s[n - 12] == '@') && n < 30)
		{
			strcpy_s(email, s.c_str());
			return true;
		}
		else
			throw 1;

	}
	catch (int)
	{
		strcpy_s(email, "radomemail@gmail.com");
		return false;
	}
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
bool account::getguest()
{
	return guest;
}
void account::setguest(bool b)
{
	guest = b;
}
bool account::checkavailable(string a)
{
	account temp;
	fstream accountsfile("accountdata.dat", ios::in | ios::binary);
	for (;1;)
	{
		if (accountsfile.read((char*)&temp, sizeof(temp)))
		{
			if (temp.getusername() == a || (a.length() < 6 || a.length() > 15))
			{
				return false;
			}
		}
		else
		{
			if ((a.length() < 6 || a.length() > 15))
			{
				return false;
			}
			else
				break;
		}
	}
	accountsfile.close();
	return true;
}
void account::writetofile()
{
	fstream accountsfile("accountdata.dat", ios::out |ios::app | ios::binary);
	accountsfile.write((char*)&*this, sizeof(*this));
	accountsfile.close();
}