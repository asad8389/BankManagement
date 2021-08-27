#ifndef PERSONALSTATEMENT_H
#define PERSONALSTATEMENT_H

#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "PersonalAccount.h"

using namespace std;

class PersonalStatement: public PersonalAccount{
	Date date;
	Time time;
	double transactionAmount;
	char *transactionType;
public:
	PersonalStatement(){
        transactionType = (char*)malloc(10);
	}
	PersonalStatement(Date d, Time t, double amount, char *type, double bal){
        date = d;
        time = t;
        transactionAmount = amount;
        transactionType = type;
        setbal(bal);
	}

    friend ostream &operator<<( ostream &output,  PersonalStatement &p ) {
        output<<p.date<<" ";
        output<<p.time<<" ";
        output<<p.transactionAmount<<" ";
        output<<p.transactionType<<" ";
        cout<<"Balance: "<<p.getbal()<<endl;
        return output;
    }

    friend istream &operator>>( istream  &input, PersonalStatement &p ) {
        double bal;
        cout<<"Enter transaction details"<<endl;
        cout<<"Date"<<endl;
        input>>p.date;
        cout<<"Time"<<endl;
        input>>p.time;
        cout<<"Amount"<<endl;
        input>>p.transactionAmount;
        cout<<"Type"<<endl;
        input>>p.transactionType;
        cout<<"Balance"<<endl;
        input>>bal;
        p.setbal(bal);

        return input;
    }

    bool operator== ( PersonalStatement &p){
        if(date.day != p.date.day) return false;
        if(date.month != p.date.month) return false;
        if(date.year != p.date.year) return false;
        if(time.hour != p.time.hour) return false;
        if(time.minute != p.time.minute) return false;
        if(time.second != p.time.second) return false;
        if(transactionAmount != p.transactionAmount) return false;
        if(transactionType != p.transactionType) return false;
        if(getbal() != p.getbal()) return false;

        return true;
    }

    bool operator!= ( PersonalStatement &p){
        return !(*this == p);
    }


};
#endif // PERSONALSTATEMENT_H
