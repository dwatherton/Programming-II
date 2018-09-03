#include"Library.h"

Library::Library()
{}

Library::Library(string name, string address, string phone)
{
	this->name = name;
	this->address = address;
	this->phone = phone;
}

Library::Library(string name, string address, string phone, double late)
{
	this->name = name;
	this->address = address;
	this->phone = phone;
	latefee = late;
}

Library::Library(string name, string address, string phone, double late, vector<Book> books, vector<Customer> customers)
{
	this->name = name;
	this->address = address;
	this->phone = phone;
	latefee = late;
	this->books = books;
	this->customers = customers;
}

string Library::getname()
{
	return name;
}

string Library::getaddress()
{
	return address;
}

string Library::getphone()
{
	return phone;
}

vector<Book> Library::getbooks()
{
	return books;
}

vector<Customer> Library::getcustomers()
{
	return customers;
}

double Library::getlatefee()
{
	return latefee;
}

void Library::addbook(Book book)
{
	books.push_back(book);
	return;
}

void Library::addcustomer(Customer customer)
{
	customers.push_back(customer);
	return;
}

void Library::setlatefee(double fee)
{
	latefee = fee;
	return;
}

void Library::displaybooks()
{
	for (unsigned int i = 0; i < books.size(); i++)
	{
		books.at(i).print();
	}
	return;
}

void Library::displaycustomers()
{
	for (unsigned int i = 0; i < customers.size(); i++)
	{
		customers.at(i).print();
	}
	return;
}

void Library::print()
{
	cout << "Library's name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Phone no: " << phone << endl;
	cout << "Late fee: " << latefee << endl;
	cout << books.size() << " books in stock." << endl;
	cout << customers.size() << " customers on file." << endl;
	return;
}
