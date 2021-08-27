#ifndef CANADIANADDRESS_H
#define CANADIANADDRESS_H


#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

template <class T> class CanadianAddress{
public:
    T suiteNo;
    char *streettype;
    char *streetName;
    T streetNumber;
    char *city;
    char *province;
    char *postalCode;
    char *country;

    CanadianAddress(){
        suiteNo = 0;
        streettype = (char*)malloc(10);
        streetName = (char*)malloc(10);
        streetNumber = 0;
        city = (char*)malloc(10);
        province = (char*)malloc(10);
        postalCode = (char*)malloc(10);
        country = (char*)malloc(10);
    }

    CanadianAddress(T sno, char *stype, char *sname, T snumber, char *cty, char *prvine, char *pc, char *cntry){
        suiteNo = sno;
        streettype = stype;
        streetName = sname;
        streetNumber = snumber;
        city = cty;
        province = prvine;
        postalCode = pc;
        country = cntry;
    }

    friend ostream &operator<<( ostream &output, const CanadianAddress &cad) {
        output << cad.suiteNo << "," << cad.streettype << "," << cad.streetName << "," << cad.streetNumber << "," << cad.city << "," << cad.province << "," << cad.postalCode << "," << cad.country;
        return output;
    }

    friend istream &operator>>( istream  &input, CanadianAddress &c) {
        cout <<"Enter your address"<<endl;
        cout <<"Suite No"<<endl;
        input >> c.suiteNo;
        cout <<"Street Type"<<endl;
        input >> c.streettype;
        cout <<"Street Name"<<endl;
        input >> c.streetName;
        cout <<"Street Number"<<endl;
        input >> c.streetNumber;
        cout <<"City"<<endl;
        input >> c.city;
        cout <<"Province"<<endl;
        input >> c.province;
        cout <<"Postal Code"<<endl;
        input >> c.postalCode;
        cout <<"Country"<<endl;
        input >> c.country;
        return input;
    }
};

#endif
