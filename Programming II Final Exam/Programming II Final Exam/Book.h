//Book.h
#ifndef BOOK_H
#define BOOK_H
#include<vector>
#include<fstream>
#include"Author.h"

namespace library {

	class Book {

	private:
		string title, isbn;
		vector<Author> authors;
		double price;
		int chapters, pages;
		bool available = true;


	public:
		//constructors
		Book();
		Book(string title);
		Book(string title, string isbn);
		Book(string title, vector<Author> authors);
		Book(string title, string isbn, vector<Author> authors);
		Book(string title, string isbn, vector<Author> authors, double price);
		Book(string title, string isbn, vector<Author> authors, double price, int chapters, int pages);
		Book(string title, string isbn, vector<Author> authors, double price, int chapters, int pages, bool available);

		//get functions
		string get_title();
		string get_isbn();
		vector<Author> get_authors();
		double get_price();
		int get_chapters();
		int get_pages();
		bool get_available();

		//set functions
		void set_title(string title);
		void set_isbn(string isbn);
		void set_authors(vector<Author> authors);
		void set_price(double price);
		void set_chapters(int chapters);
		void set_pages(int pages);
		void set_available(bool available);

		//friend function
		friend int total_pages(Book book_one, Book book_two);

		//print functions
		void print();

		//file functions
		void save_into_file();
		void read_from_file();

		//overloaded operator+ function
		double operator+(Book book2);

	};//Class Book
}//Namespace library
#endif