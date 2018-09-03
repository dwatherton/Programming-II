//Date.h
#ifndef DATE_H
#define DATE_H
#include<iostream>
using namespace std;

class Date {

private:
	int month, day, year;

public:
	Date();
	void set_date(int, int, int);
	void show_date();
	friend bool equal(Date, Date);

};
#endif