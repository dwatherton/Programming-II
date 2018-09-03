#ifndef PERSON_H
#define PERSON_H
#include<string>
#include<iostream>
using namespace std;

class Person {
private:
	string first_name, last_name, ssn, address;

protected:
	char gender;

public:
	Person();
	Person(string, string, string, string);
	string get_first_name();
	string get_last_name();
	string get_address();
	string get_ssn();
	void print();
};
#endif