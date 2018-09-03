//Person.cpp
#include"Person.h"
using namespace library;

Person::Person() {

}

Person::Person(string f_name, string l_name) {
	this->f_name = f_name;
	this->l_name = l_name;
}

Person::Person(Date DOB) {
	this->DOB = DOB;
}

Person::Person(string phone_no) {
	this->phone_no = phone_no;
}

Person::Person(string f_name, string l_name, string phone_no, string email) {
	this->f_name = f_name;
	this->l_name = l_name;
	this->phone_no = phone_no;
	this->email = email;
}

Person::Person(string f_name, string l_name, Date dob, string address, string phone_no, string email, string d_license) {
	this->f_name = f_name;
	this->l_name = l_name;
	this->phone_no = phone_no;
	this->email = email;
	this->d_license = d_license;
}

string Person::get_f_name() {
	return f_name;
}

string Person::get_l_name() {
	return l_name;
}

Date Person::get_DOB() {
	return DOB;
}

string Person::get_phone_no() {
	return phone_no;
}

string Person::get_address() {
	return address;
}

string Person::get_email() {
	return email;
}

string Person::get_d_license() {
	return d_license;
}

void Person::set_f_name(string f_name) {
	this->f_name = f_name;
}

void Person::set_l_name(string l_name) {
	this->l_name = l_name;
}

void Person::set_DOB(Date DOB) {
	this->DOB = DOB;
}

void Person::set_phone_no(string phone_no) {
	this->phone_no = phone_no;
}

void Person::set_address(string address) {
	this->address = address;
}

void Person::set_email(string email) {
	this->email = email;
}

void Person::set_d_license(string d_license) {
	this->d_license = d_license;
}

void Person::print1() {	//Print 1 is for printing in author class print() function
	cout << "First Name: " << f_name << endl;
	cout << "Last Name: " << l_name << endl;
	cout << "Phone Number: " << phone_no << endl;
	cout << "Email: " << email << endl;
	return;
}

void Person::print2() {	//Print 2 is for printing in customer class print() function
	Person::print1();
	cout << "Drivers Licence: " << d_license << endl;
	return;
}