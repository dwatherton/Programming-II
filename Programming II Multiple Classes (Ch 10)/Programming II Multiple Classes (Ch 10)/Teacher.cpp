//Teacher.cpp
#include"Teacher.h"
using namespace ualr;

teacher::teacher()
{

}

teacher::teacher(string name, vector<student> student_list)
{
	this -> name = name;
	this -> student_list = student_list;
}

string teacher::get_name()
{
	return name;
}

vector<student> teacher::get_students()
{
	return student_list;
}

void teacher::set_name(string name)
{
	this -> name = name;
	return;
}

void teacher::set_students(vector<student> student_list)
{
	this ->student_list = student_list;
	return;
}

void teacher::print()
{
	cout << "Teacher name: " << name << endl;
	for (int i = 0; i < student_list.size(); i++)
	{
		student_list.at(i).print();
	}
	return;
}