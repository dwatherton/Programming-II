//Main.cpp
#include"Teacher.h"
using namespace ualr;


void menu();
void add_new_teacher(Teacher& new_teacher);
void display_info(vector<Teacher> new_teacher);


int main() {
	int choice;
	vector<Teacher> teacher_list;
	
	do {
	system("cls");
	menu();
	cout << "Enter Your Choice: => ";
	cin >> choice;
	cin.ignore();

	switch(choice) {
	case 1: {
		Teacher new_teacher;
		add_new_teacher(new_teacher);
		teacher_list.push_back(new_teacher);
		system("pause");
		break;
	}
			
	case 2: {
		display_info(teacher_list);
		system("pause");
		break;
	}

	case 3: {
		system("exit");
		break;
	}

	default: {
		 cout << "ERROR: Please Enter a Number 1 - 3..." << endl;
	}
}

} while (choice != 3);

	system("pause");
	return 0;
}


void menu() {
	cout << "			Welcome to the UALR System!" << endl;
	cout << "			1. Add a new Teacher." << endl;
	cout << "			2. Display Teachers." << endl;
	cout << "			3. EXIT!" << endl;
	return;
}

void add_new_teacher(Teacher &new_teacher) {
	string teacher_name, student_name;
	Date DOB;
	char sp, answer;
	int number_of_scores;
	vector<Student> student_list;
	

	cout << "Enter the Teachers Name: ";
	getline(cin, teacher_name);
	new_teacher.set_name(teacher_name);

	AddNewStudent:
	cout << "Enter the Students Name: ";
	getline(cin, student_name);

	cout << "Enter the Students DOB (mm/dd/yyyy): ";
	cin >> DOB.month >> sp >> DOB.day >> sp >> DOB.year;
	
	cout << "Enter the Number Of Scores: ";
	cin >> number_of_scores;

	vector<double> scores(number_of_scores);
	for (int i = 0; i < scores.size(); i++) {
		cout << "Score " << i + 1 << ": ";
		cin >> scores.at(i);
	}
	cin.ignore();

	Student New_student(student_name, DOB, scores);
	student_list.push_back(New_student);

	cout << "Add Another Student? (y:yes or n:no): ";
	cin >> answer;
	cin.ignore();

	if (answer == 'y' || answer == 'Y')
	{
		goto AddNewStudent;
	}

	new_teacher.set_students(student_list);

	return;
}

void display_info(vector<Teacher> new_teacher) {
	for (int i = 0; i < new_teacher.size(); i++)
	{
		new_teacher.at(i).print();
	}
	return;
}