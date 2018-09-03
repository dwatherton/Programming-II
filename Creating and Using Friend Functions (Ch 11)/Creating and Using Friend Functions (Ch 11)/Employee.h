#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include<string>

using namespace std;

class Employee {

private:
	string first_name, last_name;
	int id;
	double salary;

public:
	Employee();
	Employee(string, string, int, double);
	friend double total_income(Employee, Employee);
	void print();

};//Class Employee

#endif