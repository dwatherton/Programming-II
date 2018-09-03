#include"Car.h"

//Global Variables
const int SIZE = 100;
//Function Declarations

int main() {
	//Local Variables
	Car cars[SIZE];
	Car *cars[SIZE];
	Car car1("Honda", "Accord", 2015, 30000.00);
	Car car2("Toyota", "Camry", 2013, 20000.00 );	

	//Code
	cars[0] = new Car(" ", " ", 2000, 3000);
	cout << "Car 1: " << endl;
	car1.print();
	cout << endl;
	cout << "Car 2: " << endl;
	car2.print();

	car1 = car2;

	cout << endl;
	cout << "Car1: " << endl;
	cout << car1 + car2 << endl << endl;
	car1.print();

	if (car1 == car2) {
		cout << "Both cars have same year!" << endl;
	}
	else {
		cout << "Both cars do NOT have the same year!" << endl;
	}
	
	system("pause");
	return 0;
}

//Function Definitions