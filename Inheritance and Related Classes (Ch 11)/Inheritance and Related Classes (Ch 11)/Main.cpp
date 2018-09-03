//Main.cpp
#include"Patient.h"

// Global Variables
Patient *patient;

//Function Delclarations
void menu();
void add_new_patient();
bool search_for_patient(Date);
bool equal(Date, Date);

int main() {
	//Local Variables
	int choice, month, day, year;
	char sp;
	bool find;
	Date dob;

	//Code
	do {
		system("cls");
		menu();

		cout << "Enter your choice HERE => ";
		cin >> choice;
		cin.ignore();
		cout << endl;

		switch (choice) {
		case 1: //1. Add New Patient
		{
			add_new_patient();
			system("pause");
			break;
		}
		case 2: //2. Display 
		{
			patient = new Patient;
			patient->read_from_file();
			system("pause");
			break;
		}
		case 3:
		{
			cout << "Enter the patients Date of Birth for searching: (mm/dd/yyyy): ";
			cin >> month >> sp >> day >> sp >> year;
			cout << endl;
			dob.set_date(month, day, year);
			find = search_for_patient(dob);
			if (find) {
				cout << endl << "Patient found!" << endl << endl;
			}//If
			else {
				cout << "Patient NOT found!" << endl << endl;
			}//Else
			system("pause");
			break;
		}
		case 4:
		{
			system("exit");
			break;
		}
		default:
		{
			cout << "ERROR: Please enter 1 - 4..." << endl << endl;
			system("pause");
			break;
		}
		}//Switch

	} while (choice != 4);
	system("pause");
	return 0;
}


//Function Definitions
void menu() {
	cout << "			  1. Add New Patient" << endl;
	cout << "			  2. Display All Patients" << endl;
	cout << "			  3. Search For a Patient" << endl;
	cout << "			  4. EXIT" << endl << endl;
	return;
}//Menu


void add_new_patient() {
	//Local Variables
	string first_name, last_name, id;
	int month, day, year;
	Date dob, doa, dod;
	char sp;

	//Code
	cout << "Enter Patient's First Name: ";
	cin >> first_name;

	cout << "Enter Patient's Last Name: ";
	cin >> last_name;

	cout << "Enter Patient's ID: ";
	cin >> id;

	cout << "Enter patient's DOB:(mm/dd/yyyy): ";
	cin >> month >> sp >> day >> sp >> year;
	dob.set_date(month, day, year);

	cout << "Enter patient's DOA:(mm/dd/yyyy): ";
	cin >> month >> sp >> day >> sp >> year;
	doa.set_date(month, day, year);

	cout << "Enter patient's DOD:(mm/dd/yyyy): ";
	cin >> month >> sp >> day >> sp >> year;
	dod.set_date(month, day, year);
	cout << endl;

	patient = new Patient(first_name, last_name, id, dob, doa, dod);

	patient->save_in_file();

	return;
}//Add_New_Patient


bool search_for_patient(Date dob) {
	patient = new Patient();
	bool flag = false;
	ifstream fin;

	fin.open("patient.txt");
	if (fin.fail()) {
		cout << "ERROR: Cannot open the file" << endl;
		system("exit");
	}//If

	fin.read((char*)patient, sizeof(Patient));
	while (!fin.eof()) {
		if (equal(dob ,patient->get_date_birth())) {
			flag = true;
			patient->print();
			break;
		}//If
	fin.read((char*)patient,sizeof(Patient));
	}//While
	fin.close();
	return flag;
}//Search_For_Patient


bool equal(Date dob1, Date dob2) {
	return(dob1.month == dob2.month && dob1.day == dob2.day && dob1.year == dob2.year);
}//Equal