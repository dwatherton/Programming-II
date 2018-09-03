//Book.h
#ifndef BOOK_H
#define BOOK_H
#include<vector>
#include"Author.h"

class	Book {

private:
	string title;
	bool borrowed;
	vector<Author> authors;

public:
	Book(string title, vector<Author> authors);
	string get_title();
	vector<Author> get_authors();
	bool is_borrowed();
	void set_title(string title);
	void set_authors(vector<Author> authors);
	void set_borrowed(bool borrowed);

};
#endif