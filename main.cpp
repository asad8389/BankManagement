#include <iostream>
#include <cstring>
#include <stdlib.h>

#include "canadianAddress.h"
#include "date&time.h"
#include "bank.h"
#include "PersonalStatement.h"
#include "BusinessStatement.h"

using namespace std;

int main(){
    //All classes work individually
    Branch br;
    PersonalAccount pa;
    BusinessAccount ba;
    CanadianAddress<int> cad(12, (char*)"street", (char*)"malibu", 235, (char*)"Toronto", (char*)"Ontario", (char*)"114520", (char*)"Canada");
    Date dt(24,05,2021);
    Time t(07,42,54);
    PersonalStatement ps(dt, t, 1400, (char*)"deposit", 5500);
    BusinessStatement bs(dt, t, 12000, (char*)"withdraw", 125000);

    cin>>br;
    cin>>pa;
    cin>>ba;
    cout<<"\n\nBranch details:\n\n"<<br;
    cout<<"\n\nPersonal account details:\n\n"<<pa;
    cout<<"\n\nBusiness Account details:\n\n"<<ba;

    BusinessStatement cbs(dt, t, 12000, (char*)"withdraw", 125000);
    PersonalStatement cps(dt, t, 150, (char*)"withdraw", 45000);

    cout<<"\n\nBoth Business statements are equal: ";
    if(bs == cbs)
        cout<<"both equal"<<endl;
    else if(ba != cbs)
        cout<<"not equal"<<endl;

    cout<<"\n\nBoth Personal statements are equal: ";
    if(ps == cps)
        cout<<"both equal"<<endl;
    else if(ba != cbs)
        cout<<"not equal"<<endl;
    cout<<"\n\n";

    //composition : we are using date and time that are
    //two different classes inside our privateStatement and businessStatement class

    Date dte(12,07,2021);
    Time tme(11,15,54);
    PersonalStatement p_st(dte, tme, 500, (char*)"deposit", 5500);
    BusinessStatement b_st(dte, tme, 50000, (char*)"withdraw", 125000);
    cout<<p_st;
    cout<<b_st;

    //Inheritance : we are inheriting privateAccount to privateStatement class
    // and similarly with the BusinessAccount and BusinessStatement class
    //here we are setting the values of balance that is a attribute of parent class

    PersonalStatement p;
    BusinessStatement b;
    b.setbal(50000);
    p.setbal(1000);
    cout<<"Balance in Private account: "<<p.getbal()<<endl;
    cout<<"Balance in Business account: "<<b.getbal()<<endl;

    return 0;
}
