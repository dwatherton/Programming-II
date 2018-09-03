//Customer.cpp
#include "Customer.h"
using namespace library;

Customer::Customer() :Person() {

}

Customer::Customer(Date DOB) : Person(DOB) {

}

Customer::Customer(string f_name, string l_name) : Person(f_name, l_name) {

}

Customer::Customer(string f_name, string l_name, string email, string phone_no) : Person(f_name, l_name, email, phone_no) {

}

Customer::Customer(Date DOB, string f_name, string l_name, string email, string phone_no, string d_license, string address, vector<Book> books_checked_out)
	: Person(DOB, f_name, l_name, email, phone_no, d_license, address) {
	this->books_checked_out = books_checked_out;
}

string Customer::get_phone() {
	return phone_no;
}

string Customer::get_f_name() {
	return f_name;
}

string Customer::get_l_name() {
	return l_name;
}

Date Customer::get_due_date() {
	return due_date;
}

Date Customer::get_date_checked_out() {
	return date_checked_out;
}

vector<Book> Customer::get_books_checked_out() {
	return books_checked_out;
}

void Customer::set_due_date(Date due_date) {
	this->due_date = due_date;
	return;
}

void Customer::set_date_checked_out(Date date_checked_out) {
	this->date_checked_out = date_checked_out;
	return;
}

void Customer::set_books_checked_out(vector<Book> books_checked_out) {
	this->books_checked_out = books_checked_out;
	return;
}

void Customer::print() {
	Person::print();
	cout << "Date of Birth: " << DOB.month << "/" << DOB.day << "/" << DOB.year << endl;
	cout << "Drivers Licence #: " << d_license << endl;
	cout << "Address: " << address << endl;
	cout << "Books checked out: " << endl;
	for (unsigned int i = 0; i < books_checked_out.size(); i++) {
		cout << "Book #" << i + 1 << ": " << books_checked_out.at(i).get_title() << endl;
	}
	return;
}

void Customer::save_customer_into_file() {
	ofstream fout;
	fout.open("customer.dat", ios::app);
	if (fout.fail()) {
		cout << "ERROR: File cannot be opened." << endl;
		system("exit");
	}
	fout.write((char*)this, sizeof(Customer));
	fout.close();
	return;
}

void Customer::read_customer_from_file() {
	ifstream fin;
	fin.open("books.dat");
	if (fin.fail()) {
		cout << "ERROR: File cannot be opened" << endl;
		system("exit");
	}
	fin.read((char*)this, sizeof(Customer));
	while (!fin.eof()) {
		fin.read((char*)this, sizeof(Customer));
	}
	fin.close();
	return;
}