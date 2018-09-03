//Chapter 9 Pointers
#include<iostream>
using namespace std;

//GV

//Function Declaration

//Main
int main()
{
	//Local Variables
	int v1, *p1;
	double grades[5], *p2;
	char *p3 = new char;
	string *names = new string[3];

	//Code
	p1 = &v1;
	v1 = 6;
	*p1 = 7;
	p2 = grades;


	cout << "BEFORE" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << grades[i] << endl;
	}
	cout << "Enter the 5 elements: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> p2[i];
	}
	cout << "AFTER " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << grades[i] << endl;;
	}



	cout << "The address of v1:= " << &v1 << endl;
	cout << "The value of v1=: " << v1 << endl;

	cout << "The value of P1=: " << *p1 << endl;

	delete p3;
	delete[] names;
	system("pause");
	return 0;
}//Main
 //Function Definition 