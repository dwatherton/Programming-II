#include"Discount.h"

Discount::Discount() : Sale() { //3. Call default constructor of inherited class!

}

Discount::Discount(double price, double discount) : Sale(price) {
	this->discount = discount;
}

double Discount::bill() const {
	return (price - (price * (discount / 100.0)));
}