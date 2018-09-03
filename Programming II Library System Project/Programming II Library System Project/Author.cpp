//Author.cpp
#include"Author.h"
using namespace library;

Author::Author() : Person() { //3. Call the default constructor of person.

}

Author::Author(string f_name, string l_name, string phone_no, string email) : Person(f_name, l_name, phone_no, email) {

}

void Author::print() {
	Person::print1();
	return;
}