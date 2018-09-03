#include"Employee.h"

Employee::Employee() {

}

Employee::Employee(string f_name, string l_name, int id, double salary) {
	first_name = f_name;
	last_name = l_name;
	this->id = id;
	this->salary = salary;
}

void Employee::print() {
	cout << "First Name: " << first_name << endl;
	cout << "Last Name: " << last_name << endl;
	cout << "ID: " << id << endl;
	cout << "Salary: " << salary << endl << endl;
	return;
}