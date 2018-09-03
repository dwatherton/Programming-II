//Chapter 8 Strings and Vectors
#include<iostream>
#include<vector> //1. Declare Class
#include<string>
using namespace std;

//GV
//Function Declaration

int main()
{
	//Local Variables
	vector<string> names; //2. Create Object
	string name;
	//Code
	names.push_back("Sara"); //3. Push back elements of the Vector
	names.push_back("Maya");
	names.push_back("Yara");
	cout << "Enter Name: ";
	getline(cin, name);
	names.push_back(name);

	for (int i = 0; i < names.size(); i++)
	{
		cout << "Name" << i + 1 << " : " << names[i] << endl;   //IS THE SAME AS...  cout << "Name" << i + 1 << " : " << names.at(i) << endl;
	}

	names.erase(names.begin() + 1);

	for (int i = 0; i < names.size(); i++)
	{
		cout << "Name" << i + 1 << " : " << names[i] << endl;
	}


	system("pause");
	return 0;
}//Main