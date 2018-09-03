//Bill.cpp
#include"Bill.h"
#include<iomanip>
using namespace library;

Bill::Bill() {

}

bool Bill::late_fee(Customer customer) {
	bool flag;
	char sp;
	const int monthDays[12] = { 31, 28, 31, 30, 31, 30,
		31, 31, 30, 31, 30, 31 };


	Date current_date;
	Date due_date = customer.get_due_date();

	cout << "Enter current date(mm/dd/yy): ";
	cin >> current_date.month >> sp >> current_date.day >> sp >> current_date.year;

	int date1 = due_date.year * 365 + due_date.day;
	for (int i = 0; i < due_date.month - 1; i++)
		date1 += monthDays[i];

	int date2 = current_date.year * 365 + current_date.day;
	for (int i = 0; i < current_date.month - 1; i++)
		date2 += monthDays[i];

	if ((date2 - date1) > 0) {
		flag = 1;
	}
	else {
		flag = 0;
	}
	return flag;

}

double Bill::get_balance(Customer customer, Library library)
{
	double balance = 0.0;
	vector<Book> book_list = customer.get_books_checked_out();

	for (unsigned int i = 0; i <= book_list.size(); i++)
	{
		balance += book_list.at(i).get_price();
	}
	if (late_fee(customer) == 1)
		balance += library.get_late_fee();

	return balance;
}

void Bill::print_receipt(Customer customer, Library library)
{
	double balance = get_balance(customer, library);
	vector<Book> book_list = customer.get_books_checked_out();


	cout << "SALES INVOICE for BORROWED BOOKS: " << endl;
	cout << "Bill to: " << customer.get_f_name() << " " << customer.get_l_name() << endl;
	cout << "----------------------------------" << endl;
	cout << "ITEMS:" << endl;
	for (unsigned int i = 0; i < book_list.size(); i++)
	{
		cout << setw(20) << book_list.at(i).get_price() << "     " << book_list.at(i).get_price() << endl;
	}
	cout << "----------------------------------" << endl;
	cout << "Total Sales:    $ " << balance << endl;
	cout << "Sales Tax:      $ " << balance * .065 << endl;
	cout << "----------------------------------" << endl;
	cout << "Grand Total:    $ " << balance * 1.065 << endl << endl;

	return;
}