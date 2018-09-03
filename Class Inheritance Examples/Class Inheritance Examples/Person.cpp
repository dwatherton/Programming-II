#include"Person.h"

Person::Person() {

}

Person::Person(string f_name, string l_name, string ssn, string address) {
	first_name = f_name;
	last_name = l_name;
	this->ssn = ssn;
	this->address = address;
}

string Person::get_first_name() {
	return first_name;
}

string Person::get_last_name() {
	return last_name;
}

string Person::get_address() {
	return address;
}

string Person::get_ssn() {
	return ssn;
}

void Person::print() {
	cout << "Name: " << first_name << " " << last_name << endl;
	cout << "Address: " << address << endl;
	cout << "SSN: " << ssn << endl;
	return;
}