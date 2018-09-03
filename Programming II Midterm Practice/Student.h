//Student.h
#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;

namespace ualr {

	struct Date {
		int month, day, year;
};

class Student {

	private:
		string name;
		Date DOB;
		vector<double> scores;

	public:
		Student();
		Student(string, Date, vector<double>);
		string get_name();
		vector<double> get_scores();
		Date get_DOB();
		void set_name(string);
		void set_scores(vector<double>);
		void set_DOB(Date);
		void print();

};//Class Student

}//Namespace UALR

#endif
