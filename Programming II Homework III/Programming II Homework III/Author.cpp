//Author.cpp
#include"Author.h"

Author::Author(string name, string email) {
	this->name = name;
	this->email = email;
}

string Author::get_name() {
	return name;
}

string Author::get_email() {
	return email;
}

void Author::set_name(string name) {
	this->name = name;
	return;
}

void Author::set_email(string email) {
	this->email = email;
	return;
}