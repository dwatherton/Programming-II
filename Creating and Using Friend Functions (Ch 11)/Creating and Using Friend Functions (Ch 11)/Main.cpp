#include"Employee.h"

//Global Variables

//Function Declarations
double total_income(Employee, Employee);

int main() {
	//Local Variables
	Employee employee1("Daniel", "Atherton", 1, 3000.00);
	Employee employee2("John", "Doe", 2, 5000.00);

	//Code
	employee1.print();
	employee2.print();

	cout << "Total Income For This Family Is: " << total_income(employee1, employee2) << endl << endl;


	system("pause");
	return 0;
}//Main



//Function Definitions
double total_income(Employee daniel, Employee john) {
	//Local Variables

	//Code
	return (daniel.salary + john.salary);
}//Total_Income