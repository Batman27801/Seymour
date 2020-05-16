#pragma once
#include <string>
using namespace std;
class security
{
protected:
	long int contactno;
	long int cnic;
	char address[200];
	bool cod;
	char card[15];
	long int cardno;
	int monthc, yearc;
public:
	security();
	bool setcontact(long int);
	long int getcontact();
	bool setcnic(long int);
	long int getcnic();
	void setaddress(string);
	string getaddress();
	void setpaymentttype(bool);
	bool getpaymenttype();
	void setcardprovider(string);
	string getcardprovider();
	bool setcardno(long int i = 0);
	long int getcardno();
	bool setexpiry(int, int);
	int* getexpiry();
	template <typename encrypt>
	encrypt encryption(encrypt);
	template <typename encrypt>
	encrypt decryption(encrypt);
	string encryption(char*);
	string decryption(char*);
	string encryption(string);
	string decryption(string);
};
