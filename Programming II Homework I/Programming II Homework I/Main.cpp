/* This is Homework 1: "Write a C++ program to delete a name from a list of students name.You need to write a function called delete_name.
The delete_name function will let the user to delete a name from any position from your list and not only from the end of your list."*/


#include<iostream>
#include<string>
using namespace std;

//Global Variables

//Function Declaration
string *delete_name(string *, int &);
void display_names(string *, int);


//Main
int main()
{
	//Local Variables
	int	size = 5;
	string *students_names = new string[size];

	//Code
	cout << "Enter " << size << " students names:" << endl << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Name " << i + 1 << ": ";
		getline(cin, students_names[i]);
	}//For
	students_names = delete_name(students_names, size);
	display_names(students_names, size);
	delete[] students_names;
	system("pause");
	return 0;
}//Main





 //Function Definitions
string *delete_name(string *students_names, int &size)
{
	//Local Variables
	string *temp = new string[size - 1], name_to_delete;
	int pos = -1;

	//Code
	cout << endl << "Enter the name to delete: ";
	getline(cin, name_to_delete);
	for (int i = 0; i < size; i++)
	{
		if (students_names[i] == name_to_delete)
		{
			pos = i;
			break;
		}//If
	}//For
	if (pos >= 0)
	{
		for (int i = 0, j = 0; i < size; i++)
		{
			if (students_names[i] != name_to_delete)
			{
				temp[j] = students_names[i];
				j++;
			}//If
		}//For
	}//If
	else
	{
		cout << "ERROR: Can not find the name " << name_to_delete << " in name list." << endl;
		return students_names;
	}//else
	size--;
	delete[] students_names;
	return temp;
}//Delete_Name





void display_names(string *students_names, int size)
{
	//Local Variables

	//Code
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Name " << i + 1 << ":	" << students_names[i] << endl;
	}//For
	cout << endl;
	return;
}//Display_Names