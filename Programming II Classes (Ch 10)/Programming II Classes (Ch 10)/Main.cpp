/* Main.cpp is used for the main body of your code.
It is where you #include"HEADER_NAME.h" to include
the class you've written in the header file. and
because in our Student.cpp file we have used the
Student::Student (Class::Function) call, we have
access in Main.cpp to both the class and the
fuction definitions by the #include"student.h"
statement at the top of our code! All we need
to do here is simply call our functions we have
written. */

#include"Student.h"
//Header file containing our class

using namespace std;


int main()
{
	//Function calls from Student.cpp
	Student student1(1234, 'A', "Jason", "400 Main St.", "5017723456");
	Student student2; //default constructor
	student1.print();
	cout << endl;
	student2.print();
	cout << endl;
	system("pause");
	return 0;
}//Main


 //Function Definitions

