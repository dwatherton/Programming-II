//Customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Book.h"

namespace library {

	class Customer :public Person {

	protected:
		Date due_date;
		Date date_checked_out;
		vector<Book> books_checked_out;

	public:
		//constructors
		Customer();
		Customer(Date DOB);
		Customer(string f_name, string l_name);
		Customer(string f_name, string l_name, string email, string phone_no);
		Customer(Date DOB, string f_name, string l_name, string email, string phone_no, string d_license, string address, vector<Book> books_checked_out);

		//get functions
		string get_f_name();
		string get_l_name();
		string get_phone();
		Date get_due_date();
		Date get_date_checked_out();
		vector<Book> get_books_checked_out();


		//set functions
		void set_due_date(Date due_date);
		void set_date_checked_out(Date date_checked_out);
		void set_books_checked_out(vector<Book> books_checked_out);

		//print functions
		void print();

		//file functions
		void save_customer_into_file();
		void read_customer_from_file();

	};//class customer
}//namespace library
#endif