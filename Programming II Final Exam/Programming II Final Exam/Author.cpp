//Author.cpp
#include "Author.h"
using namespace library;

Author::Author() : Person() { //3. call the default constructor of person.

}

Author::Author(string f_name, string l_name) : Person(f_name, l_name) {
	this->f_name = f_name;
	this->l_name = l_name;
}

Author::Author(string f_name, string l_name, string email, string phone_no) : Person(f_name, l_name, email, phone_no) {
	this->f_name = f_name;
	this->l_name = l_name;
	this->email = email;
	this->phone_no = phone_no;
}

void Author::print() {
	Person::print();
	return;
}