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
void setaddress(string);
string getaddress();
void setpaymentttype(bool);
bool getpaymenttype();
void setcardprovider(string);
string getcardprovider();
void setcardno(long int);
long int getcardno();
void setexpiry(int, int, int);
int* getexpiry();
encrypt encryption(encrypt);
encrypt decryption(encrypt);
