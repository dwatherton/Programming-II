//Teacher.h
#ifndef TEACHER_H
#define TEACHER_H
#include"Student.h"
using namespace ualr;

namespace ualr {
class Teacher {
	private:
		string name;
		vector<Student> student_list;

	public:
		Teacher();
		Teacher(string, vector<Student>);
		string get_name();
		vector<Student> get_students();
		void set_name(string);
		void set_students(vector<Student>);
		void print();
		
};//Class Teacher

}//Namespace ualr
#endif

