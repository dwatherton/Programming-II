//Library.cpp
#include"Library.h"
using namespace library;

Library::Library() {

}

Library::Library(string name, string address, string phone) {
	this->name = name;
	this->address = address;
	this->phone = phone;
}

Library::Library(string name, string address, string phone, double late_fee) {
	this->name = name;
	this->address = address;
	this->phone = phone;
	this->late_fee = late_fee;
}

Library::Library(string name, string address, string phone, double late_fee, vector<Book> books_in_library, vector<Customer> customers) {
	this->name = name;
	this->address = address;
	this->phone = phone;
	this->late_fee = late_fee;
	this->books_in_library = books_in_library;
	this->customers = customers;
}

string Library::get_name() {
	return name;
}

string Library::get_address() {
	return address;
}

string Library::get_phone() {
	return phone;
}

double Library::get_late_fee() {
	return late_fee;
}

vector<Book> Library::get_books_in_library() {
	return books_in_library;
}

vector<Customer> Library::get_customers() {
	return customers;
}

void Library::set_name(string name) {
	this->name = name;
	return;
}

void Library::set_address(string address) {
	this->address = address;
	return;
}

void Library::set_phone(string phone) {
	this->phone = phone;
	return;
}

void Library::set_late_fee(double late_fee) {
	this->late_fee = late_fee;
	return;
}

void Library::set_books_in_library(vector<Book> books_in_library) {
	this->books_in_library = books_in_library;
	return;
}

void Library::set_customers_in_library(vector<Customer> customers_in_library)
{
	customers = customers_in_library;
	return;
}


void Library::add_book(Book book) {
	books_in_library.push_back(book);
	cout << "Successfully added a book to the library!" << endl << endl;
	return;
}

void Library::remove_book(string isbn) {
	bool flag;
	for (unsigned int i = 0; i < books_in_library.size(); i++) {
		if (books_in_library.at(i).get_isbn() == isbn) {
			books_in_library.erase(books_in_library.begin() + i);
			flag = true;
			break;
		}
		else {
			flag = false;
		}
	}
	if (flag == true) {
		cout << endl << "Successfully deleted the book from the library!" << endl << endl;
	}
	else {
		cout << endl << "Sorry, The Book with ISBN '" << isbn << "' Could NOT be found!" << endl << endl;
	}
	return;
}

void Library::search_book(string isbn) {
	bool flag;
	for (unsigned int i = 0; i < books_in_library.size(); i++) {
		if (books_in_library.at(i).get_isbn() == isbn) {
			books_in_library.at(i).print();
			flag = true;
			break;
		}
		else {
			flag = false;
		}
	}
	if (flag == true) {
		cout << endl << "The Book with ISBN '" << isbn << "' is in the Library Catalog!" << endl << endl;
	}
	else {
		cout << "Sorry, The Book with ISBN '" << isbn << "' is NOT in the Library Catalog!" << endl << endl;
	}
	return;
}

void Library::add_customer(Customer customer) {
	customers.push_back(customer);
	cout << endl << "Successfully added a customer to the library" << endl << endl;
	return;
}

void Library::remove_customer(string phone) {
	bool flag;
	for (unsigned int i = 0; i < customers.size(); i++) {
		if (customers.at(i).get_phone() == phone) {
			customers.erase(customers.begin() + i);
			flag = true;
			break;
		}
		else {
			flag = false;
		}
	}
	if (flag == true) {
		cout << endl << "Successfully removed the customer from the library" << endl << endl;
	}
	else {
		cout << endl << "Sorry, a Customer with the Phone Number of '" << phone << "' Could NOT be found!" << endl << endl;
	}
	return;
}

void Library::search_customer(string phone) {
	bool flag;
	for (unsigned int i = 0; i < customers.size(); i++) {
		if (customers.at(i).get_phone() == phone) {
			customers.at(i).print();
			flag = true;
			break;
		}
		else {
			flag = false;
		}
	}
	if (flag == true) {
		cout << endl << "The Customer with Phone Number '" << phone << "' has been found!" << endl << endl;
	}
	else {
		cout << "Sorry, No Customer could be found with the Phone Number '" << phone << "'!" << endl << endl;
	}
	return;
}

void Library::print_customers() {
	for (unsigned int i = 0; i < customers.size(); i++) {
		cout << "Customer #" << i + 1 << ": " << endl;
		customers.at(i).print();
		cout << endl;
	}
	return;
}

void Library::print_books() {
	for (unsigned int i = 0; i < books_in_library.size(); i++) {
		cout << "Book #" << i + 1 << ": " << endl;
		books_in_library.at(i).print();
		cout << endl;
	}
	return;
}

void Library::print() {
	cout << "Library's Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Phone Number: " << phone << endl;
	cout << "Late fee: $" << late_fee << endl;
	cout << books_in_library.size() << " book(s) in the catalog." << endl;
	cout << customers.size() << " customer(s) on file." << endl << endl;
	return;
}