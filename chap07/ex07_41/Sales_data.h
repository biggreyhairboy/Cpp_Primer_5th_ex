#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>
using namespace std;
struct Sales_data;
istream &read(istream &is, Sales_data &item);
ostream &print(ostream &os, Sales_data &item);
struct Sales_data{
	explicit Sales_data(): Sales_data("")  {cout << "default constructor" << endl;};
	explicit Sales_data(const string &isbn): Sales_data(isbn, 0, 0) { cout << "just isbn" << endl; };
	explicit Sales_data(const string &isbn, const unsigned quantity, double price);
	explicit Sales_data(istream &is);

	Sales_data & combine(const Sales_data &arecord);
	Sales_data add(const Sales_data &item1, const Sales_data &item2);
	inline double avg_price(){ return revenue / quantity; };

	const std::string isbn();
	std::string ISBN;
	unsigned quantity;
	double revenue;
};
#endif
