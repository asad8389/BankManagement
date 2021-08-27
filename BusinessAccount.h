#ifndef BUSINESSACCOUNT_H
#define BUSINESSACCOUNT_H


#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "branch.h"

using namespace std;

class BusinessAccount: public Branch{
    int accountNumber;
	char *accountType;
	double balance;
	char *businessName;
	char *DBA;
    char *phone;
	char *email;
public:
	BusinessAccount(){
	    accountNumber = 0;
        accountType = (char*)malloc(10);
        balance = 0;
        businessName = (char*)malloc(20);
        DBA = (char*)malloc(10);
        phone = (char*)malloc(10);
        email = (char*)malloc(40);
	}

	double getbal(){
	    return balance;
	}
    void setbal(double bal){
        balance = bal;
	}

	friend ostream &operator<<( ostream &output, const BusinessAccount &b ) {
        output << "Account No: " << b.accountNumber << endl;
        output << "Account Type: " << b.accountType << endl;
        output << "Balance: " << b.balance << endl;
        output << "Business Name: " << b.businessName << endl;
        output << "DBA: " << b.DBA << endl;
        output << "Phone No: " << b.phone << endl;
        output << "Email: " << b.email << endl;
        return output;
    }

    friend istream &operator>>( istream  &input, BusinessAccount &b ) {
        cout << "Enter Business Account Details" << endl;
        cout << "Account No: " << endl;
        input >> b.accountNumber;
        cout << "Account Type: " << endl;
        input >> b.accountType;
        cout << "Balance: " << endl;
        input >> b.balance;
        cout << "Business Name: " << endl;
        input >> b.businessName;
        cout << "DBA: "  << endl;
        input >> b.DBA;
        cout << "Phone No: " << endl;
        input >> b.phone;
        cout << "Email: " << endl;
        input >> b.email;
        return input;
    }

    bool operator== (const BusinessAccount &b){
        if(accountNumber != b.accountNumber) return false;
        if(strcmp(accountType, b.accountType)!=0) return false;
        if(balance != b.balance) return false;
        if(strcmp(businessName, b.businessName)!=0) return false;
        if(strcmp(DBA, b.DBA)!=0) return false;
        if(strcmp(phone, b.phone)!=0) return false;
        if(strcmp(email, b.email)!=0) return false;
        return true;
    }

    bool operator!= (const BusinessAccount &b){
        return !(*this == b);
    }


};

#endif // BUSINESSACCOUNT_H
