#include"Employee.h"

//3. Call The Base Constructor 
Employee::Employee() :Person() {
	gender = '0';
}

Employee::Employee(string first_name, string last_name, string ssn, string address, string id, double salary) : Person(first_name, last_name, ssn, address) {
	this->id = id;
	this->salary = salary;
	cout << "Enter Gender (F: Female, M: Male): ";
	cin >> gender;
}

string Employee::get_id() {
	return id;
}

double Employee::get_salary() {
	return salary;
}

void Employee::print() {
	Person::print();
	cout << "ID: " << id << endl;
	cout << "Salary: " << salary << endl;
	cout << "Gender: " << gender << endl;
}