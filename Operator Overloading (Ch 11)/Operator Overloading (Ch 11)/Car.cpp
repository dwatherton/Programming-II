#include"Car.h"

Car::Car() {

}

Car::Car(string maker, string model, int year, double price) : maker(maker), model(model), year(year), price(price) {

}

void Car::print() {
	cout << "Car Maker: " << maker << endl;
	cout << "Car Model: " << model << endl;
	cout << "Car Year: " << year << endl;
	cout << "Car Price: " << price << endl;
	return;
}

void Car::operator=(Car car2) {
	this ->maker = car2.maker;
	this ->model = car2.model;
	return;
}

double Car::operator +(Car car2) {
	return this ->price + car2.price;
}

bool Car::operator ==(Car car2) {
	return (this ->year == car2.year);
}