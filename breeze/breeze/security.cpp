#pragma once
#include "security.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

security::security()
{
	contactno = 0;
	cnic = 0;
	address = "";
	cod = true;
	card = "";
	cardno = 0;
	dayc = 0;
	monthc = 0;
	yearc = 0;
}

void security::setcontact(long int c)
{
	contactno = encryption(c);
}
long int security::getcontact()
{
	return decryption(contactno);
}
void security::setcnic(long int c)
{
	cnic = encryption(c);
}
long int security::getcnic()
{
	return decryption(cnic);
}
void security::setaddress(string s)
{
	address = encryption(s);
}
string security::getaddress()
{
	return decryption(address);
}
void security::setpaymentttype(bool b)
{
	cod = b;
}
bool security::getpaymenttype()
{
	return cod;
}
void security::setcardprovider(string s)
{
	card = encryption(s);
}
string security::getcardprovider()
{
	return decryption(card);
}
void security::setcardno(long int i)
{
	cardno = encryption(i);
}
long int security::getcardno()
{
	return decryption(cardno);
}
void security::setexpiry(int d, int m, int y)
{
	dayc = encryption(d);
	monthc = encryption(m);
	yearc = encryption(y);
}
int* security::getexpiry()
{
	static int exp[3];
	exp[0] = decryption(dayc);
	exp[1] = decryption(monthc);
	exp[2] = decryption(yearc);
	return exp;
}
template <typename encrypt>
encrypt security::encryption(encrypt var)
{
	long int temp, temp2 = 0, count;
	temp = var;
	for (count = 0; temp != 0; count++)
	{
		temp = temp / 10;
	}
	temp = var;
	count--;
	for (int i = 0; temp != 0; i++)
	{
		temp2 = temp2 + (temp % 10 + 2) * pow(10, count - i);
		temp = temp / 10;
		
	}
	return temp2;
}
template <typename encrypt>
encrypt security::decryption(encrypt var)
{
	long int temp, temp2 = 0, count;
	temp = var;
	for (count = 0; temp != 0; count++)
	{
		temp = temp / 10;
	}
	temp = var;
	count--;
	for (int i = 0; temp != 0; i++)
	{
		temp2 = temp2 + (temp % 10 - 2) * pow(10, count - i);
		temp = temp / 10;
	}
	return temp2;
}
string security::encryption(string var)
{
	string temp = var;
	int i,length = temp.length();
	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			temp[i] = temp[i] + 2;
		else if (i % 2 == 1)
			temp[i] = temp[i] - 2;
	}
	return temp;
}
string security::decryption(string var)
{
	string temp = var;
	int i, length = temp.length();
	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			temp[i] = temp[i] - 2;
		else if (i % 2 == 1)
			temp[i] = temp[i] + 2;
	}
	return temp;
}
