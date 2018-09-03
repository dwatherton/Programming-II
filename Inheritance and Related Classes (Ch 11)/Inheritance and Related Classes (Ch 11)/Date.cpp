//Date.cpp
#include"Date.h"

Date::Date() {

}

void Date::set_date(int m, int d, int y) {
	month = m;
	day = d;
	year = y;
	return;
}

void Date::show_date() {
	cout << month << "/" << day << "/" << year << endl;
	return;
}