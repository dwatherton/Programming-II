//Author.h
#ifndef AUTHOR_H
#define AUTHOR_H
#include"Person.h"    //1. include base class

namespace library {

	class Author : public Person {    //2. show the data accessible to Author class from Person class

	public:
		//constructors
		Author();
		Author(string f_name, string l_name);
		Author(string f_name, string l_name, string email, string phone_no);

		//get functions (none, inherits all from person)

		//set functions (none, inherits all from person)

		//print Function (inherits print_author from person)
		void print();

	};//class Author
}//namespace library
#endif