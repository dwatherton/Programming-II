//Teacher.h
#ifndef TEACHER_H
#define TEACHER_H
#include"Student.h"

namespace ualr {
	class teacher
	{
		private:
			string name;
			vector<student> student_list;

		public:
			teacher();
			teacher(string, vector<student>);
			string get_name();
			vector<student> get_students();
			void set_name(string);
			void set_students(vector<student>);
			void print();

	};//class teacher

}//ualr namespace
#endif
