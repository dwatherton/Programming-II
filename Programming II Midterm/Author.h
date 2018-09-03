#ifndef AUTHOR_H
#define AUTHOR_H
#include<string>
using namespace std;

class Author {
	private:
		string name, email;

	public:
		Author();
		Author(string name, string email);
		string get_name();
		string get_email();
		void set_name(string name);
		void set_email(string email);
};
#endif