//Library.h
#ifndef LIBRARY_H
#define LIBRARY_H
#include"Customer.h"

namespace library {

	class Library {
	private:
		string name, address, phone;
		double late_fee;
		vector<Book> books_in_library;
		vector<Customer> customers;

	public:
		//constructors
		Library();
		Library(string name, string address, string phone);
		Library(string name, string address, string phone, double late_fee);
		Library(string name, string address, string phone, double late_fee, vector<Book> books_in_library, vector<Customer> customers);

		//get functions
		string get_name();
		string get_address();
		string get_phone();
		double get_late_fee();
		vector<Book> get_books_in_library();
		vector<Customer> get_customers();


		//set functions
		void set_name(string name);
		void set_address(string address);
		void set_phone(string phone);
		void set_late_fee(double late_fee);
		void set_books_in_library(vector<Book> books_in_library);
		void set_customers_in_library(vector<Customer> customers_in_library);
		void add_book(Book book);
		void remove_book(string isbn);
		void search_book(string isbn);
		void add_customer(Customer customer);
		void remove_customer(string phone);
		void search_customer(string phone);

		//print functions
		void print_customers();
		void print_books();
		void print();

	};//class Library
}//namespace library
#endif