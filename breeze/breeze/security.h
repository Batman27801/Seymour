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
	char card[8];
	long int cardno;
	int dayc, monthc, yearc;
public:
	security();
	void setcontact(long int);
	long int getcontact();
	void setcnic(long int);
	long int getcnic();
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
	template <typename encrypt>
	encrypt encryption(encrypt);
	template <typename encrypt>
	encrypt decryption(encrypt);
	string encryption(char*);
	string decryption(char*);
	string encryption(string);
	string decryption(string);
};
