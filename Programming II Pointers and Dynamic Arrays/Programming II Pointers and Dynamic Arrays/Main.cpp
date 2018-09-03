// This is Chapter 9 Pointers and Dynamic Arrays
#include<iostream>
#include<string>
using namespace std;

//Global Variables

//Function Declaration
string* add_name(string*, int&);
void display_names(string*, int);


//Main
int main()
{
	//Local Variables
	int	size = 3;
	string *students_names = new string[size];

	//Code
	cout << "Enter " << size << " students names:" << endl;
	for (int i = 0; i < size; i++)
	{
		getline(cin, students_names[i]);
	}
	students_names = add_name(students_names, size);
	display_names(students_names, size);
	delete[] students_names;
	system("pause");
	return 0;
}//Main




 //Function Definitions
string* add_name(string	*s_names, int&size)
{
	//Local Variables
	string new_name;
	string	*temp = new	string[size + 1];

	//Code
	cout << "Enter the new name to add to the list: ";
	cin >> new_name;
	for (int i = 0; i < size; i++)
	{
		temp[i] = s_names[i];
	}
	temp[size] = new_name;
	delete[] s_names;
	size++;
	return temp;
}//Add_Name


void display_names(string* names, int s)
{
	//Local Variables

	//Code
	for (int i = 0; i < s; i++)
	{
		cout << "Name " << i << ":	" << names[i] << endl;
	}
	return;
}//Display_Names