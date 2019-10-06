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
	data1.revenue = data1.quantity * price;
	cin >> data2.ISBN >> data2.quantity >> price; 
	data2.revenue = data2.quantity * price;
	if(data1.ISBN == data2.ISBN){
		double total_revenue = data1.revenue + data2.revenue;
		unsigned int total_units = data1.quantity + data2.quantity;
		if(total_units != 0){
			cout << "average price " << total_revenue/total_units << endl;
		}
		else{
			cout<< "no sales" << endl;;
		}
	}
	else
	{
		cout << "must be the same ISBN" << endl;
	}
	return 0;
}

