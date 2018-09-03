#ifndef EMPLOYEE_H
#define EMPLOYEE_H
//1. Include Base Header!
#include"Person.h"

//2. Express The Inheritance Between The Base And The Child
class Employee :public Person {
private:
	string id;
	double salary;

protected:

public:
	Employee();
	Employee(string, string, string, string, string, double);
	string get_id();
	double get_salary();
	void print();
};
#endif
