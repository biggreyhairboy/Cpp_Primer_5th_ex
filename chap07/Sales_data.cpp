#include "Sales_data.h"
#include <iostream>
using namespace std;
istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.ISBN >> item.quantity >> price;
	item.revenue = item.quantity * price;
	return is;
}
ostream &print(ostream &os, Sales_data &item)
{
	os << item.ISBN << " " << item.quantity << " " << item.revenue;
	return os;
}

Sales_data::Sales_data(const string& isbn, const unsigned quanity, double price)
{
	this->ISBN = isbn;
	this->quantity = quanity;
	this->revenue = price * quanity;
}

Sales_data::Sales_data(istream &is)
{
	is >> this->ISBN >> this->quantity;
	double price = 0;
	is >> price;
	this->revenue = this->quantity * price;
}
Sales_data & Sales_data::combine(const Sales_data &arecord)
{
	quantity += arecord.quantity;
	revenue += arecord.revenue;
	return *this;
}

Sales_data Sales_data::add(const Sales_data &item1, const Sales_data &item2)
{
	Sales_data sum;
	sum.quantity = item1.quantity;
	sum.ISBN = item1.ISBN;
	sum.revenue = item1.revenue;
	sum.combine(item2);
	return sum;
}

const std::string Sales_data::isbn()
{
	return ISBN;
}
