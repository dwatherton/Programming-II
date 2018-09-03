//Book.cpp
#include "Book.h"
using namespace library;

Book::Book() {

}

Book::Book(string title) {
	this->title = title;
}

Book::Book(string title, string isbn) {
	this->title = title;
	this->isbn = isbn;
}

Book::Book(string title, vector<Author> authors) {
	this->title = title;
	this->authors = authors;
}

Book::Book(string title, string isbn, vector<Author> authors) {
	this->title = title;
	this->isbn = isbn;
	this->authors = authors;
}

Book::Book(string title, string isbn, vector<Author> authors, double price) {
	this->title = title;
	this->isbn = isbn;
	this->authors = authors;
	this->price = price;
}

Book::Book(string title, string isbn, vector<Author> authors, double price, int chapters, int pages) {
	this->title = title;
	this->isbn = isbn;
	this->authors = authors;
	this->price = price;
	this->chapters = chapters;
	this->pages = pages;
}

Book::Book(string title, string isbn, vector<Author> authors, double price, int chapters, int pages, bool available) {
	this->title = title;
	this->isbn = isbn;
	this->authors = authors;
	this->price = price;
	this->chapters = chapters;
	this->pages = pages;
	this->available = available;
}

//get functions
string Book::get_title() {
	return title;
}

string Book::get_isbn() {
	return isbn;
}

vector<Author> Book::get_authors() {
	return authors;
}

double Book::get_price() {
	return price;
}

int Book::get_chapters() {
	return chapters;
}

int Book::get_pages() {
	return pages;
}

bool Book::get_available() {
	return available;
}

//set functions
void Book::set_title(string title) {
	this->title = title;
	return;
}

void Book::set_isbn(string isbn) {
	this->isbn = isbn;
	return;
}

void Book::set_authors(vector<Author> authors) {
	this->authors = authors;
	return;
}

void Book::set_price(double price) {
	this->price = price;
	return;
}

void Book::set_chapters(int chapters) {
	this->chapters = chapters;
	return;
}

void Book::set_pages(int pages) {
	this->pages = pages;
	return;
}

void Book::set_available(bool available) {
	this->available = available;
	return;
}

//print function
void Book::print() {
	cout << "Title: " << title << endl;
	cout << "ISBN: " << isbn << endl;
	cout << "Authors: ";
	for (unsigned int i = 0; i < authors.size(); i++)
	{
		cout << authors.at(i).get_f_name() << " " << authors.at(i).get_l_name() << endl;
	}
	cout << "Price: $" << price << endl;
	cout << "Chapters: " << chapters << endl;
	cout << "Pages: " << pages << endl;

	cout << "Available: ";
	if (available)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return;
}

//file functions
void Book::save_into_file()
{
	ofstream fout;
	fout.open("book.dat", ios::app);
	if (fout.fail())
	{
		cout << "ERROR: File cannot be opened." << endl;
		system("exit");
	}
	fout.write((char*)this, sizeof(Book));
	fout.close();
	return;
}

void Book::read_from_file()
{
	ifstream fin;
	fin.open("book.dat");
	if (fin.fail())
	{
		cout << "File does not exist." << endl;
		system("exit");
	}
	fin.read((char*)this, sizeof(Book));
	while (!fin.eof())
	{
		fin.read((char*)this, sizeof(Book));
	}
	fin.close();
	return;
}

double Book::operator+(Book book2)
{
	return this->price + book2.price;
}