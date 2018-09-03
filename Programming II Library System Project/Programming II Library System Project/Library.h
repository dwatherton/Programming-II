//Library.h
#ifndef LIBRARY_H
#define LIBRARY_H
#include"Customer.h"
#include"Bill.h"

using namespace std;

namespace library {
	class Library {

	private:
		vector<Book> books;
		vector<Customer> customers;
		string name, address, phone;
		double latefee;

	public:
		Library(); //default
		Library(string, string, string); //name, address, phone
		Library(string, string, string, double); //last one + late fee
		Library(string, string, string, double, vector<Book>, vector<Customer>); //Constructing the library with all the info
		string getname();
		string getaddress();
		string getphone();
		vector<Book> getbooks();
		vector<Customer> getcustomers();
		double getlatefee();
		void addbook(Book);
		void addcustomer(Customer);
		void setlatefee(double);
		void displaycustomers();
		void displaybooks();
		void print();

	};//Class Library
}//Namespace Library
#endif