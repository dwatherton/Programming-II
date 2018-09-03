//Person.cpp
#include"Person.h"

Person::Person() {
	first_name="";
	last_name="";
}

Person::Person(string first_name, string last_name) {
	this->first_name = first_name;
	this->last_name = last_name;
}