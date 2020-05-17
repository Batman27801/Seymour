#pragma once
#include "security.h"
#include <iostream>
#include <string>
using namespace std;

int digitcounter(long int v)
{
	int count = 0;
	for (; v != 0;)
	{
		v = v / 10;
		count++;
	}
	return count;
}

security::security()
{
	contactno = 0;
	cnic = 0;
	strcpy_s(address, "");
	cod = true;
	strcpy_s(card, "");
	cardno = 0;
	monthc = 0;
	yearc = 0;
}

bool security::setcontact(long int c)
{
	try {
		int i=0;
		if (digitcounter(c)==10)
		{
			contactno = encryption(c);
			return true;
		}
		else 
			throw i++;
	}
	catch (int i) {
		i > 0 ? (contactno = 0) : (1);
		return false;
	}
}
long int security::getcontact()
{
	return decryption(contactno);
}
bool security::setcnic(long int c)
{	
	int i=0;
	try {
		
		if (digitcounter(c)==10)
		{
			cnic = encryption(c);
			return true;
		}
		else
			throw i++;
	}
	catch (int i) {
		i > 0 ? (cnic = 0) : (1);
		return false;
	}
}
long int security::getcnic()
{
	return decryption(cnic);
}
void security::setaddress(string s)
{
	strcpy_s(address,(encryption(s)).c_str());
}
char* security::getaddress()
{
	char temp[200];
	strcpy_s(temp, (decryption(address)).c_str());
	return temp;
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
	strcpy_s(card, (encryption(s)).c_str());
}
char* security::getcardprovider()
{
	char temp[15];
	strcpy_s(temp, decryption(card).c_str());
	return temp;
}
bool security::setcardno(long int i)
{
	int o=0;
	try {
		if (digitcounter(i) == 9 || i == 0 )
		{
			cardno = encryption(i);
			return true;
		}
		else
			throw o++;
	}
	catch (int o) {
		o > 0 ? (cardno = 0) : (1);
		return false;
	}
}
long int security::getcardno()
{
	return decryption(cardno);
}
bool security::setexpiry(int m, int y)
{
	try {
		int i=0;
		if ((m>5 && m<13 && y > 2019) || (m==0 && y==0))
		{
			monthc = encryption(m);
			yearc = encryption(y);
			return true;
		}
		else
			throw i++;
	}
	catch (int i) {
		i > 0 ? (monthc = 5, yearc = 2020) : (1);
		return false;
	}
}
int* security::getexpiry()
{
	static int exp[2];
	exp[0] = decryption(monthc);
	exp[1] = decryption(yearc);
	return exp;
}
template <typename encrypt>
encrypt security::encryption(encrypt var)
{
	long int temp, temp2 = 0;
	temp = var;
	/*for (count = 0; temp != 0; count++)
	{
		temp = temp / 10;
	}
	temp = var;
	//count--;*/
	for (int i = 0; temp != 0; i++)
	{
		temp2 = temp2*10 + (temp % 10 + 2);
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
		temp2 = temp2*10 + (temp % 10 - 2) ;
		temp = temp / 10;
	}
	return temp2;
}
string security::encryption(char* var)
{
	string temp = var;
	return encryption(temp);
}
string security::decryption(char* var)
{
	string temp = var;
	return decryption(temp);
}
string security::encryption(string var)
{
	string temp = var;
	int i, length = temp.length();
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


