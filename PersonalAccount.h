#ifndef PERSONALACCOUNT_H
#define PERSONALACCOUNT_H

#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "branch.h"

using namespace std;

class PersonalAccount: public Branch{
    int accountNumber;
	char *accountType;
	double balance;
	char *beneficiaryName;
	char *beneficiaryLastName;
	char *phone;
	char *email;
public:
	PersonalAccount(){
        accountType = (char*)malloc(10);
        balance = 0;
        beneficiaryName = (char*)malloc(20);
        beneficiaryLastName = (char*)malloc(20);
        phone = (char*)malloc(10);
        email = (char*)malloc(40);
	}
	double getbal(){
	    return balance;
	}
	void setbal(double bal){
        balance = bal;
	}

	friend ostream &operator<<( ostream &output, const PersonalAccount &p ) {
        output << "Account No: " << p.accountNumber << endl;
        output << "Account Type: " << p.accountType << endl;
        output << "Balance: " << p.balance << endl;
        output << "Beneficiary Name: " << p.beneficiaryName << endl;
        output << "Beneficiary Last Name: " << p.beneficiaryLastName << endl;
        output << "Phone No: " << p.phone << endl;
        output << "Email: " << p.email << endl;
        return output;
    }

    friend istream &operator>>( istream  &input, PersonalAccount &p ) {
        cout << "Enter Personal Account Details" << endl;
        cout << "Account No: " << endl;
        input >> p.accountNumber;
        cout << "Account Type: " << endl;
        input >> p.accountType;
        cout << "Balance: " << endl;
        input >> p.balance;
        cout << "Beneficiary Name: " << endl;
        input >> p.beneficiaryName;
        cout << "Beneficiary Last Name: "  << endl;
        input >> p.beneficiaryLastName;
        cout << "Phone No: " << endl;
        input >> p.phone;
        cout << "Email: " << endl;
        input >> p.email;
        return input;
    }

    bool operator== (const PersonalAccount &p){
        if(accountNumber != p.accountNumber) return false;
        if(strcmp(accountType, p.accountType)!=0) return false;
        if(balance != p.balance) return false;
        if(strcmp(beneficiaryName, p.beneficiaryName)!=0) return false;
        if(strcmp(beneficiaryLastName, p.beneficiaryLastName)!=0) return false;
        if(strcmp(phone, p.phone)!=0) return false;
        if(strcmp(email, p.email)!=0) return false;
        return true;
    }

    bool operator!= (const PersonalAccount &p){
        return !(*this == p);
    }

};

#endif // PERSONALACCOUNT_H
