//Teacher.cpp
#include"Teacher.h"
using namespace ualr;

Teacher::Teacher() {

}

Teacher::Teacher(string name, vector<Student> student_list) {
	this -> name = name;
	this -> student_list = student_list;
}

string Teacher::get_name() {
	return name;
}

vector<Student> Teacher::get_students() {
	return student_list;
}

void Teacher::set_name(string name) {
	this -> name = name;
	return;
}

void Teacher::set_students(vector<Student> student_list) {
	this -> student_list = student_list;
	return;
}

void Teacher::print() {
	cout << "Teacher Name: " << name << endl;
	for (int i = 0; i < student_list.size(); i++)
	{
		student_list.at(i).print();
	}
	return;
}