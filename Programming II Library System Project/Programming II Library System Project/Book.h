//Book.h
#ifndef BOOK_H
#define BOOK_H
#include<fstream>
#include"Author.h"

using namespace library;

namespace library {

	class Book : public Author {

	private:
		string title, isbn;
		int chapters, pages;
		double price;
		bool available = true;
		vector<Author> authors;

	public:
		//constructors
		Book();
		Book(string title);
		Book(string isbn, string title);
		Book(string title, vector<Author> authors);
		Book(string isbn, string title, vector<Author> authors);
		Book(string isbn, string title, vector<Author> authors, double price);
		Book(string isbn, string title, vector<Author> authors, double price, int chapters, int pages);

		//get functions
		string get_title();
		string get_isbn();
		int get_chapters();
		int get_pages();
		double get_price();
		bool get_available();
		vector<Author> get_authors();

		//set functions
		void set_title(string title);
		void set_isbn(string isbn);
		void set_chapters(int chapters);
		void set_pages(int pages);
		void set_price(double price);
		void set_available(bool available);
		void set_authors(vector<Author> authors);

		//print functions
		void print();

		//file functions
		void save_into_file();
		void read_from_file();

		//operator overloading
		double operator+(Book);

	};//Class Book
}//Namespace library
#endif
