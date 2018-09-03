#ifndef SALE_H
#define SALE_H

class Sale {

protected:
	double price;
	virtual double bill() const;

public:
	Sale();
	Sale(double);
	double Saving(const Sale&);
	friend bool operator<(const Sale &, const Sale &);

};//Sale
#endif