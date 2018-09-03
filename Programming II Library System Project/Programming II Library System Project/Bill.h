#ifndef BILL_H
#define BILL_H
#include "Customer.h"
#include "Library.h"

using namespace library;

namespace library {

	class Bill : public Customer {

	private:
		bool late_fee;
		double balance;
		vector<Customer> customer;
		Date receipt_date;

	public:
		//constructors
		Bill();
		Bill(string f_name, string l_name, Date DOB, string address, string phone_no, string email, string d_license, Date due_date, Date date_checked_out, double balance, bool late_fee, Date receipt_date);

		//get functions
		bool get_late_fee();
		double get_balance();
		vector<Customer> get_customer();
		Date get_receipt_date();

		//set functions
		void set_late_fee(bool late_fee);
		void set_balance(double balance);
		void set_customer(vector<Customer> customer);
		void set_receipt_date(Date receipt_date);

		//print functions
		void print_receipt();

	};//Class Bill
}//Namespace library
#endif
