#include "security.h"
#include <iostream>
#include <string>
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
//template <typename encrypt>
//encrypt security::encryption(encrypt var)
//{
//
//}
//template <typename encrypt>
//encrypt security::decryption(encrypt var);
//
//string operator ^= (string s, int a)
//{
//
//}
//
//long int operator ^= (long int s, int a)
//{
//
//}
//
//int operator ^= (int s, int a)
//{
//
//}