//Customer.h
#include "Customer.h"

Customer::Customer() :Person() {

}

Customer::Customer(string f_name, string l_name, Date DOB, string address, string phone_no,
	string email, string d_license, Date due_date, Date date_checked_out)
	: Person(f_name, l_name, DOB, address, phone_no, email, d_license) {
	this->due_date = due_date;
	this->date_checked_out = date_checked_out;
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

vector<Book> Customer::get_check_in_book() {
	return check_in_book;
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

void Customer::set_check_in_book(vector<Book> check_in_books) {
	this->check_in_book = check_in_book;
	return;
}

void Customer::print() {
	Person::print2();
	return;
}

void Customer::save_customer_into_file() {

	return;
}

void Customer::read_customer_from_file() {

	return;
}