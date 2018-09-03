//Student.h
#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>
#include<vector>

using namespace std;

namespace ualr {
	struct date
	 {
		int day, month, year;
	 };//struct date

	class student 
	{
		private:
			string name;
			date DOB;			
			vector<double> scores;

		public:
			student();
			student(string, vector<double>, date);
			string get_name();
			vector<double> get_scores();
			date get_DOB();
			void set_DOB(date);
			void set_name(string);
			void set_scores(vector<double>);
			void print();

	};//class student

}//ualr namespace
#endif
