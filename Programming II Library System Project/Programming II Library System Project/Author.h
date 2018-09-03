//Author.h (Presentation overview of entire project & talk about my class specifically) - Daniel
#ifndef AUTHOR_H
#define AUTHOR_H
#include<vector>
#include"Person.h"	//1. Include base class

using namespace library;

namespace library {

	class Author : public Person {	//2. Show the data accessible to Author class from Person class

	public:
		//Constructors
		Author();
		Author(string, string, string, string);

		//Print Function
		void print();

	};//Class Author
}//Namespace library
#endif