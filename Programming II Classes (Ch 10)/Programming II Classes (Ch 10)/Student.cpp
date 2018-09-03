/* Student.cpp file is used for writing your function
definitions that are being called in your public section
of your class defined in your header file. */

#include"Student.h"

Student::Student()
{


}//Default Constructor

Student::Student(int ID, char grade, string name, string address, string phone_no)
{
	this->ID = ID;
	this->grade = grade;
	this->address = address;
	this->phone_no = phone_no;
	this->name = name;
}//Constructor Student

void Student::print()
{
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Grade: " << grade << endl;
	cout << "ID: " << ID << endl;
	cout << "Phone Number: " << phone_no << endl;
	return;
}//Void Student