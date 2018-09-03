//Student.cpp
#include"Student.h"
using namespace ualr;

student::student()
{

}//student::student()

student::student(string name, vector<double> scores, date DOB):name(name), scores(scores), DOB(DOB)
{
	
}//student::student(name, scores, DOB)

string student::get_name()
{
	return name;
}//student::get_name()

vector<double> student::get_scores()
{
	return scores;
}//student::get_scores()

date student::get_DOB()
{
	return DOB;
}//student::get_DOB

void student::set_DOB(date DOB)
{
	this -> DOB = DOB;
	return;
}//Student::set_DOB

void student::set_name(string name)
{
	this -> name = name;
	return;
}//student::set_name()

void student::set_scores(vector<double> scores)
{
	this -> scores = scores;
	return;
}//student::set_scores()

void student::print()
{
	cout << "Student name: " << name << endl;
	cout << "Student DOB: " << DOB.month << "/" << DOB.day << "/" << DOB.year << "." << endl;
	for (int i = 0; i < scores.size(); i++)
	{
		cout << "Score " << i + 1 << ": " << scores.at(i) << endl;
	}
return;
}//student::print()