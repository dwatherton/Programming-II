//Person.cpp
#include"Person.h"
using namespace library;

Person::Person() {

}

Person::Person(Date DOB) {
	this->DOB = DOB;
}

Person::Person(string f_name, string l_name) {
	this->f_name = f_name;
	this->l_name = l_name;
}

Person::Person(string f_name, string l_name, string email, string phone_no) {
	this->f_name = f_name;
	this->l_name = l_name;
	this->email = email;
	this->phone_no = phone_no;
}

Person::Person(Date DOB, string f_name, string l_name, string email, string phone_no, string d_license, string address) {
	this->DOB = DOB;
	this->f_name = f_name;
	this->l_name = l_name;
	this->email = email;
	this->phone_no = phone_no;
	this->d_license = d_license;
	this->address = address;
}

Date Person::get_DOB() {
	return DOB;
}

string Person::get_f_name() {
	return f_name;
}

string Person::get_l_name() {
	return l_name;
}

string Person::get_email() {
	return email;
}

string Person::get_phone_no() {
	return phone_no;
}

string Person::get_d_license() {
	return d_license;
}

string Person::get_address() {
	return address;
}

void Person::set_DOB(Date DOB) {
	this->DOB = DOB;
	return;
}

void Person::set_f_name(string f_name) {
	this->f_name = f_name;
	return;
}

void Person::set_l_name(string l_name) {
	this->l_name = l_name;
	return;
}

void Person::set_email(string email) {
	this->email = email;
	return;
}

void Person::set_phone_no(string phone_no) {
	this->phone_no = phone_no;
	return;
}

void Person::set_d_license(string d_license) {
	this->d_license = d_license;
	return;
}

void Person::set_address(string address) {
	this->address = address;
	return;
}

void Person::print() {
	cout << "First Name: " << f_name << endl;
	cout << "Last Name: " << l_name << endl;
	cout << "Email: " << email << endl;
	cout << "Phone Number: " << phone_no << endl;
	return;
}