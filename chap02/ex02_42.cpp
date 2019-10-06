#include <iostream>
#include <string>
#include "Sales_data.h"
using namespace std;
int main(){
	Sales_data data1,data2;
	double price = 0;
	cin >> data1.ISBN >> data1.quantity >> price; 
	string current_ISBN = data1.ISBN;
	unsigned current_units= data1.quantity;
	double current_revenue = data1.quantity * price;
	while(cin >> data2.ISBN >> data2.quantity >> price){
		if(data2.ISBN != "over"){
			if(current_ISBN == data2.ISBN){
				current_units += data2.quantity;
				current_revenue += data2.quantity * price;
			} else {
				cout << "total sell " << current_ISBN << " for " << current_units << " of " << current_revenue << "." << endl;
				current_ISBN = data2.ISBN;
				current_units = data2.quantity;
				current_revenue = data2.quantity * price;
			}
		} else {
			cout << "total sell " << current_ISBN << " for " << current_units << " of " << current_revenue << "." << endl;
			return 0;
		}
	}
	return 0;
}


