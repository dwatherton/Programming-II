#ifndef CAR_H
#define CAR_H
#include<iostream>
#include<string>
using namespace std;

class Car {

private:
	string maker, model;
	int year;
	double price;

public:
	Car();
	Car(string, string, int, double);
	void print();
	void operator = (Car);
	double operator + (Car);
	bool operator == (Car);
	
};
#endif