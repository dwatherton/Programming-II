//Student.cpp
#include"Student.h"
using namespace ualr;

Student::Student() {


}

Student::Student(string name, Date DOB, vector<double> scores) {
	this -> name = name;
	this -> DOB = DOB;
	this -> scores = scores;
}

string Student::get_name() {
	return name;
}

vector<double> Student::get_scores() {
	return scores;
}

Date Student::get_DOB() {
	return DOB;
}

void Student::set_name(string name) {
	this -> name = name;
	return;
}

void Student::set_scores(vector<double> scores) {
	this -> scores = scores;
	return;
}

void Student::set_DOB(Date DOB) {
	this -> DOB = DOB;
	return;
}

void Student::print() {
	cout << "Student Name: " << name << endl;
	cout << "Students DOB: " << DOB.month << "/" << DOB.day << "/" << DOB.year << endl;
	for (int i = 0; i < scores.size(); i++)
	{
		cout << "Score " << i + 1 << ": " << scores.at(i) << endl;
	}
	return;
}