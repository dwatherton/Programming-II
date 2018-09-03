//Book.cpp
#include "Book.h"

Book::Book() {

}

Book::Book(string title) {
	this->title = title;
}

Book::Book(string isbn, string title) {
	this->isbn = isbn;
	this->title = title;
}

Book::Book(string title, vector<Author> authors) {
	this->title = title;
	this->authors = authors;
}

Book::Book(string isbn, string title, vector<Author> authors) {
	this->isbn = isbn;
	this->title = title;
	this->authors = authors;
}

Book::Book(string isbn, string title, vector<Author> authors, double price) {
	this->isbn = isbn;
	this->title = title;
	this->authors = authors;
	this->price = price;
}

Book::Book(string isbn, string title, vector<Author> authors, double price, int chapters, int pages) {
	this->isbn = isbn;
	this->title = title;
	this->authors = authors;
	this->price = price;
	this->chapters = chapters;
	this->pages = pages;
}

//get functions
string Book::get_title() {
	return title;
}

string Book::get_isbn() {
	return isbn;
}

int Book::get_chapters() {
	return chapters;
}

int Book::get_pages() {
	return pages;
}

double Book::get_price() {
	return price;
}

bool Book::get_available() {
	return available;
}

vector<Author> Book::get_authors() {
	return authors;
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

void Book::set_chapters(int chapters) {
	this->chapters = chapters;
	return;
}

void Book::set_pages(int pages) {
	this->pages = pages;
	return;
}

void Book::set_price(double prices) {
	this->price = price;
	return;
}

void Book::set_available(bool available) {
	this->available = available;
	return;
}

void Book::set_authors(vector<Author> authors) {
	this->authors = authors;
	return;
}

//print function
void Book::print() {
	cout << "Title: " << title;
	cout << "ISBN: " << isbn;
	cout << "Authors: ";
	for (int i = 0; i < authors.size(); i++)
	{
		cout << authors.at(i).get_f_name() << " " << authors.at(i).get_l_name() << endl;
	}
	cout << "Price: " << price;

	cout << "Available: ";
	if (available)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	cout << "Chapters: " << chapters;
	cout << "Pages" << pages;
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

double Book::operator+ (Book book2) {
	return this->price + book2.price;
}