#include"Employee.h"
//GV
//Function Dec

int main()
{
	Employee employee1;
	employee1.print();

	Employee employee2("Daniel", "Atherton", "123456789", "38 Crestwood Drive", "123456", "50000");
	employee2.print();



	system("pause");
	return 0;
}