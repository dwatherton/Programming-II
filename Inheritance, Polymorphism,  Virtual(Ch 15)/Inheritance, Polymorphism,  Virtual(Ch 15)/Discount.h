#ifndef DISCOUNT_H
#define DISCOUNT_H
#include"Sale.h" //1. Include base class!

class Discount : public Sale { //2. Specify inheritance!

protected:
	double discount;
	double bill() const;

public:
	Discount();
	Discount(double price, double discount);

};//Discount
#endif
