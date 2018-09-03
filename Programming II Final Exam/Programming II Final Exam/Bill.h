//Bill.h
#ifndef BILL_H
#define BILL_H
#include"Library.h"

namespace library {

	class Bill :public Customer {
	private:
		vector<Customer> customers;
		Date receipt_date;
		double balance;
		vector<Book> book_list;
		bool is_late;

	public:
		//constructors
		Bill();

		//get functions
		bool late_fee(Customer);
		double get_balance(Customer customer, Library library);
		void print_receipt(Customer customer, Library library);

		//set functions

		//print functions

	};//class Bill
}//namespace library
#endif