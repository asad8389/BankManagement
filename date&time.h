#ifndef DATE_TIME_H
#define DATE_TIME_H

#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

class Date{
public:
	int day;
	int month;
	int year;

	Date(){}
	Date(int d, int m, int y){
        day=d;
        month=m;
        year=y;
	}

	void operator = (const Date &d){
	    day = d.day;
	    month = d.month;
	    year = d.year;
	}

	friend ostream &operator<<( ostream &output, const Date &d ) {
        output << d.day << "/" << d.month << "/" << d.year;
        return output;
    }

    friend istream &operator>>( istream  &input, Date &d ) {
        cout<<"Enter Date"<<endl;
        cout<<"Day"<<endl;
        input >> d.day;
        cout<<"Month"<<endl;
        input >> d.month;
        cout<<"Year"<<endl;
        input >> d.year;
        return input;
    }

};

class Time{
public:
	int hour;
	int minute;
	int second;

	Time(){}
	Time(int h, int m, int s){
        hour=h;
        minute=m;
        second=s;
	}

	void operator = (const Time &t){
	    hour = t.hour;
	    minute = t.minute;
	    second = t.second;
	}

	friend ostream &operator<<( ostream &output, const Time &t ) {
        output << t.hour << ":" << t.minute << ":" << t.second;
        return output;
    }

    friend istream &operator>>( istream  &input, Time &t ) {
        cout<<"Enter time"<<endl;
        cout<<"Hour"<<endl;
        input >> t.hour;
        cout<<"Minute"<<endl;
        input >> t.minute;
        cout<<"Second"<<endl;
        input >> t.second;
        return input;
    }
};

#endif
