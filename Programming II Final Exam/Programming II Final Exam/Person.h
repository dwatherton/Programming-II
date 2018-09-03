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
	protected:
		Date DOB;
		string f_name, l_name, email, phone_no, d_license, address;

	public:
		//constructors
		Person();
		Person(Date DOB);
		Person(string f_name, string l_name);
		Person(string f_name, string l_name, string email, string phone_no);
		Person(Date DOB, string f_name, string l_name, string email, string phone_no, string d_license, string address);

		//get functions
		Date get_DOB();
		string get_f_name();
		string get_l_name();
		string get_email();
		string get_phone_no();
		string get_d_license();
		string get_address();

		//set functions
		void set_DOB(Date DOB);
		void set_f_name(string f_name);
		void set_l_name(string l_name);
		void set_email(string email);
		void set_phone_no(string phone_no);
		void set_d_license(string d_license);
		void set_address(string address);

		//print functions
		virtual void print(); // VIRTUAL FUNCTION implementation!

	};//class person
}//namespace library
#endif