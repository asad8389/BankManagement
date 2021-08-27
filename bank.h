#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "branch.h"

using namespace std;

class Bank{
    char *name;
    int  institutionID;
    Branch branches[20];
public:
    virtual void setval() = 0;
    virtual void show() = 0;
};
#endif
