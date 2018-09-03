#include"Sale.h"

Sale::Sale() {

}

Sale::Sale(double price) :price(price) {

}

double Sale::bill() const {
	return price;
}

double Sale::Saving(const Sale &sale) {
	return (bill() - sale.bill());
}