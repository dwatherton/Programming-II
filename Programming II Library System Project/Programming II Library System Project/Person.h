//Person.h
#ifndef PERSON_H
#define PERSON_H
#include<string>
#include<iostream>

using namespace std;

namespace library {

	struct Date
	{
		int day, month, year;
	};

	class Person {

	private:
		Date DOB;
		string f_name, l_name, address, phone_no, email, d_license;

	public:
		//Constructors
		Person();
		Person(string f_name, string l_name);
		Person(Date DOB);
		Person(string phone_no);
		Person(string f_name, string l_name, string phone_no, string email);
		Person(string f_name, string l_name, Date DOB, string address, string phone_no, string email, string d_license);

		//Get Functions
		string get_f_name();
		string get_l_name();
		Date get_DOB();
		string get_phone_no();
		string get_address();
		string get_email();
		string get_d_license();

		//Set Functions
		void set_f_name(string);
		void set_l_name(string);
		void set_DOB(Date);
		void set_phone_no(string);
		void set_address(string);
		void set_email(string);
		void set_d_license(string);

		//Print Function
		void print1();
		void print2();

	};//Class Person
}//library
#endif