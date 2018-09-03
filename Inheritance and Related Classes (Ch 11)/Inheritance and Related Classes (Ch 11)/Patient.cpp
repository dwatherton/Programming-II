//Patient.cpp
#include"Patient.h"

Patient::Patient() :Person() { //3. Call the default constructor of person.

}

Patient::Patient(string first_name, string last_name, string id, Date dob, Date doa, Date dod) : Person(first_name, last_name) {
	this->id = id;
	date_birth = dob;
	date_admission = doa;
	date_discharge = dod;
}

Date Patient::get_date_birth() {
	return date_birth;
}

void Patient::print() {
	cout << "First Name: " << first_name << endl;
	cout << "Last Name: " << last_name << endl;
	cout << "ID: " << id << endl;
	cout << "Date of Birth: ";
	date_birth.show_date();
	cout << "Date of Admission: ";
	date_admission.show_date();
	cout << "Date of Discharge: ";
	date_discharge.show_date();
}

void Patient::save_in_file() {
	ofstream write_into_file;
	write_into_file.open("Patient.txt", ios::app);
	write_into_file.write((char*)this, sizeof(Patient));
	write_into_file.close();
	return;
}

void Patient::read_from_file() {
	ifstream read_file;
	read_file.open("Patient.txt");
	read_file.read((char*)this, sizeof(Patient));
	while (!read_file.eof()) {
		cout << "First Name: " << first_name << endl;
		cout << "Last Name: " << last_name << endl;
		cout << "ID: " << id << endl;
		cout << "Date of Birth: ";
		date_birth.show_date();
		cout << "Date of Admission: ";
		date_admission.show_date();
		cout << "Date of Discharge: ";
		date_discharge.show_date();
		cout << endl;

		read_file.read((char*)this, sizeof(Patient));
	}
	read_file.close();
	return;
}