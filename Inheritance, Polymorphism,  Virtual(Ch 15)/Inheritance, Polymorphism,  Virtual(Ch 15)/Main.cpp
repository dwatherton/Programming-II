#include"Discount.h"
#include"Sale.h"
#include<iostream>
#include<fstream>
using namespace std;

//Global Variable

//Function Declarations
bool operator <(const Sale&, const Sale&);

int main() {
	//Local Variables
	Sale item1(10);
	Discount item2(12, 50);
	fstream fout;
	fout.open("DELETE_ME.txt");
	int cost = 5;

	//Code
	if (item1 < item2) {
		cout << "Item 1 is cheaper than Item 2!" << endl;
		cout << "You are saving " << item1.Saving(item2) << endl;
	}
	else {
		cout << "Item 2 is cheaper than Item 1!" << endl;
		cout << "You are saving " << item1.Saving(item2) << endl;
	}

	fout << cost;

	system("pause");
	return 0;
}//Main

//Function Definitions
bool operator <(const Sale &item1, const Sale &item2) {
	return (item1.bill() < item2.bill());
}