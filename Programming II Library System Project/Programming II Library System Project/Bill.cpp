#include"Bill.h"

Bill::Bill() : Customer() {

}

Bill::Bill(string f_name, string l_name, Date DOB, string address, string phone_no, string email, string d_license, Date due_date, Date date_checked_out, double balance, bool late_fee, Date receipt_date) : Customer(f_name, l_name, DOB, address, phone_no, email, d_license, due_date, date_checked_out) {
	this->balance = balance;
	this->late_fee = late_fee;
	this->receipt_date = receipt_date;
}

bool Bill::get_late_fee() {
	return late_fee;
}

double Bill::get_balance() {
	return balance;
}

vector<Customer> Bill::get_customer() {
	return customer;
}

Date Bill::get_receipt_date() {
	return receipt_date;
}

void Bill::set_late_fee(bool late_fee) {
	this->late_fee = late_fee;
	return;
}

void Bill::set_balance(double balance) {
	this->balance = balance;
	return;
}

void Bill::set_customer(vector<Customer> customer) {
	this->customer = customer;
	return;
}

void Bill::set_receipt_date(Date receipt_date) {
	this->receipt_date = receipt_date;
	return;
}

void Bill::print_receipt() {
	Customer::print();
	return;
}