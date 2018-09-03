#include"Book.h"

Book::Book() {

}

Book::Book(string title, vector<Author> authors) {
	this->title = title;
	this->authors = authors;
}

string Book::get_title() {
	return title;
}

vector<Author> Book::get_authors() {
	return authors;
}

bool Book::is_borrowed() {
	return borrowed;
}

void Book::set_title(string title) {
	this -> title = title;
	return;
}

void Book::set_authors(vector<Author> authors) {
	this -> authors = authors;
	return;
}

void Book::set_borrowed(bool borrowed) {
	this -> borrowed = borrowed;
	return;
}