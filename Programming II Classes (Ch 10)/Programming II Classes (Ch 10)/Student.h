/* Header file is used for keeping classes seperate from
your main code (reduce clutter and confusion. */

#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>

using namespace std;


class Student
{
private:
	int ID;
	char grade;
	string name, address, phone_no;

public:
	Student();
	Student(int, char, string, string, string);
	void print();
};//Class Student
#endif

  /* Good practice dictates keeping class variables PRIVATE,
  and using PUBLIC functions to access/change the PRIVATE
  variables simply by calling the function under PUBLIC in
  the class. */