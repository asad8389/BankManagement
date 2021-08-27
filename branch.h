#ifndef BRANCH_H
#define BRANCH_H


#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "canadianAddress.h"

using namespace std;

class Branch{
    int branchID;
    CanadianAddress<int> caAddr;
public:
    Branch(){}
    friend ostream &operator<<( ostream &output, const Branch &b ) {
        output<<"Branch ID: "<<b.branchID<<endl;
        output<<"Address  : ";
        cout<<b.caAddr<<endl;
        return output;
    }

    friend istream &operator>>( istream  &input, Branch &b ) {
        cout<<"Enter Branch details"<<endl;
        cout<<"Branch ID"<<endl;
        input >> b.branchID;
        cout<<"Address"<<endl;
        input>>b.caAddr;
        return input;
    }

};

#endif
