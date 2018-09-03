//Person.h
#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>

using namespace std;

class Person {
protected:
	string first_name, last_name;

private:


public:
	Person();
	Person(string, string);
};
#endif