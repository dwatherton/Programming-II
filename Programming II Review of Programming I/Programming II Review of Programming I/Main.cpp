/* This program is a review for programming I.
This is an Employee Information System */

//Libraries.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//Global Variables.
const int SIZE = 3;

//Function Declaration.
void menu();
void enter_information(int&, string&, double&, string[], char&);
void display_information(int, string, double, string[], char);

//Main Function.
int main()
{
	//Local Variables.
	int choice, age;
	string name, phone_no[SIZE];
	double income;
	char are_you_18_years_or_older;


	//Code Goes HERE.
	do
	{

		//Clear Your Screen.
		system("cls");

		//1. Create a Menu.
		menu();


		//2. Prompt the user to input her/his choice.
		cout << "Enter Your Choice :=> ";
		cin >> choice;
		cout << endl;
		cin.ignore();

		//3. Handling User's Choice.
		switch (choice)
		{
		case 1: {
			enter_information(age, name, income, phone_no, are_you_18_years_or_older);
			break;
		}//If 1
		case 2: {
			display_information(age, name, income, phone_no, are_you_18_years_or_older);
			break;
		}//If 2
		case 3: {
			system("exit");
			break;
		}//If 3
		default:
			cout << "ERROR, Please select 1-3..." << endl;
			system("pause");
		}//Switch
	} while (choice != 3);


	system("pause");
	return 0;
}//Main

 //Function Definition.
void menu()
{
	//Local Variables.

	//Code.
	cout << "               Employee Information System" << endl;
	cout << "           Created by: Programming II Students" << endl << endl << endl;
	cout << "           1: Enter Information" << endl;
	cout << "           2: Display Information" << endl;
	cout << "           3: Quit" << endl << endl << endl;
	return;
}//Menu

void enter_information(int &age, string &name, double &income, string phone_no[SIZE], char &are_you_18_years_or_older)
{
	//Local Variables.
	ofstream write_into_file;
	write_into_file.open("Employee_Information.txt");

	//Code.
	cout << "           1. Enter Your Name: ";
	getline(cin, name);
	write_into_file << "Name: " << name << endl;
	cout << endl;

	cout << "           2. Enter Your Age: ";
	cin >> age;
	write_into_file << "Age: " << age << endl;
	cout << endl;

	cout << "           3. Enter Your Income: ";
	cin >> income;
	write_into_file << "Income: " << income << endl;
	cout << endl;

Question: cout << "           4. Are you 18 years old or older? (Y:Yes N:No): ";
	cin >> are_you_18_years_or_older;
	write_into_file << "Adult: " << are_you_18_years_or_older << endl;
	cout << endl;
	if (are_you_18_years_or_older != 'y' && are_you_18_years_or_older != 'Y' && are_you_18_years_or_older != 'n' && are_you_18_years_or_older != 'N')
	{
		goto Question;
	}

	cout << "           5. Enter " << SIZE << " Phone Numbers." << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "           Enter Phone Number " << i + 1 << " : ";
		cin >> phone_no[i];
		write_into_file << "Phone Number " << i + 1 << " : " << phone_no[i] << endl;
		cout << endl;
	}//For

	write_into_file.close();

	system("pause");
	return;
}//Enter_Information

void display_information(int age, string name, double income, string phone_no[SIZE], char are_you_18_years_or_older)
{
	//Local Variables.
	string line;
	ifstream read_from_file;
	read_from_file.open("Employee_Information.txt");

	//Code.
	if (read_from_file.fail())
	{
		cout << "This file can NOT be opened... File does not EXIST!" << endl;
	}
	else
	{
		while (!read_from_file.eof())
		{
			getline(read_from_file, line);
			cout << line << endl;
		}//While
	}//Else

	read_from_file.close();
	system("pause");
	return;
}//Display_Information