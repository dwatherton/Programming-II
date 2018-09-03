//Patient.h
#ifndef PATIENT_H
#define PATIENT_H
#include<fstream>
#include"Person.h"	//1. Include base class
#include"Date.h"

class Patient : public Person { //.2 Show the data accessible to the parent

private:
	string id;
	Date date_birth, date_admission, date_discharge;

public:
	Patient();
	Patient(string, string, string, Date, Date, Date);
	Date get_date_birth();
	void print();
	void save_in_file();
	void read_from_file();
};
#endif