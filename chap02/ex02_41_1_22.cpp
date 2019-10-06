#include <iostream>
#include <string>
using namespace std;
struct Sales_data{
	//Sales_data(string &isbn, double a, int q, double avg):ISBN(isbn),amount(a),quantity(q){}
	string ISBN;
	unsigned int quantity;
	double revenue;
};
int main(){
	Sales_data data1,data2;
	double price = 0;
	cin >> data1.ISBN >> data1.quantity >> price; 
	unsigned total_units = data1.quantity;
	double total_revenue = data1.quantity * price;
	while(cin >> data2.ISBN >> data2.quantity >> price){
		if(data1.ISBN == data2.ISBN){
			total_units += data2.quantity;
			total_revenue = data2.quantity * price + total_revenue;
		} else {
	 		cout << "total sell " << data1.ISBN << "for " << total_units << " of " << total_revenue << "." << endl;
			return 0;
		} 
	}
	cout << "total sell " << data1.ISBN << " for " << total_units << " of " << total_revenue << "." << endl;
	return 0;
}

