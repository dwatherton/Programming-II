//Main.cpp
#include"Teacher.h"
using namespace ualr;


//Global Variables


//Function Declarations
void menu();
void add_new_teacher(teacher &teacher_list); //Pass a class by reference because we already have name and student_list in the teacher class!
void display_info(vector<teacher> teacher_list);


int main()
{
	//Local Variables
	int option;
	vector<teacher> teacher_list;

	//Code
do
{
system("cls");
menu();
//Ask user to enter his/her option
cout << "Enter your choice => ";
cin >> option;
cin.ignore();

switch (option)
{
	case 1: //Add new teacher
	{
		teacher new_teacher;
		add_new_teacher(new_teacher);
		teacher_list.push_back(new_teacher);
		system("pause");
		break;
	}//Case 1

	case 2: //Display teacher info
	{
		display_info(teacher_list);
		system("pause");
		break;
	}//Case 2

	case 3: //Exit
	{
		system("exit");
		break;
	}//Case 3

	default:
	{
		cout << "ERROR: Please enter 1-3!" << endl;
	}
}//Switch

}while(option != 3);
	system("pause");
	return 0;
}//Main


//Function Definitions
void menu()
{
	cout << "          UALR UNIVERSITY" << endl << endl;
	cout << "          1. Add Teacher" << endl;
	cout << "          2. Display Teacher" << endl;
	cout << "          3. Exit" << endl << endl;
	return;
}//Menu


void add_new_teacher(teacher &new_teacher)
{
	//Local Variables
	string t_name, s_name;
	char sp, answer;
	vector<student> student_list;
	int no_of_scores;
	date DOB;

	//Code
	cout << "Enter Teacher's Name: ";
	getline(cin, t_name);
	new_teacher.set_name(t_name);

	addnewstudent:
	cout << "Enter Student's Name: ";
	getline(cin, s_name);

	cout << "Enter Student's DOB: ";
	cin >> DOB.month >> sp >> DOB.day >> sp >> DOB.year;

	cout << "Enter no. of scores: ";
	cin >> no_of_scores;

	vector<double> scores(no_of_scores);

	for (int i = 0; i < scores.size(); i++)
	{
		cout << "Enter score " << i +1 << ": ";
		cin >> scores.at(i);
	}//For i
	cin.ignore();

	student student(s_name, scores, DOB);
	student_list.push_back(student);

	cout << "Add another student? (yes:y no:n): ";
	cin >> answer;
	cin.ignore();

	if (answer == 'y' || answer == 'Y')
	{
		goto addnewstudent;
	}//If

	new_teacher.set_students(student_list);
	return;
}//Add_New_Teacher


void display_info(vector<teacher> teacher_list)
{
	for (int i = 0; i < teacher_list.size(); i++)
	{
		teacher_list.at(i).print();
	}//For
	return;
}//Display_Info