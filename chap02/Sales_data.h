#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_data{
	//Sales_data(string &isbn, double a, int q, double avg):ISBN(isbn),amount(a),quantity(q){}
	std::string ISBN;
	unsigned int quantity;
	double revenue;
};
#endif
