//Customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Book.h"

using namespace library;

class Customer :public Person {

private:
	Date due_date;
	Date date_checked_out;
	vector<Book> books_checked_out;
	vector<Book> check_in_book;

public:
	//create Customer
	Customer();
	Customer(string f_name, string l_name, Date DOB, string address, string phone_no, string email, string d_license, Date due_date, Date date_checked_out);

	//get functions
	Date get_due_date();
	Date get_date_checked_out();
	vector<Book> get_books_checked_out();
	vector<Book> get_check_in_book();

	//set function 
	void set_due_date(Date due_date);
	void set_date_checked_out(Date date_checked_out);
	void set_books_checked_out(vector<Book> books_checked_out);
	void set_check_in_book(vector<Book> check_in_books);

	//print customer
	void print();

	//file functions
	void save_customer_into_file();
	void read_customer_from_file();

};//customer
#endif