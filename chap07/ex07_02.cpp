#include <iostream>
#include <vector>
#include <string>
#include "Sales_data.h"
using namespace std;
int main(){
	Sales_data total;
	cin >> total.ISBN >> total.quantity >> total.revenue;
	if(!(total.ISBN).empty()){
		Sales_data trans;
		while(cin >> trans.ISBN >> trans.quantity >> trans.revenue){
			if(total.ISBN == trans.ISBN)
			{
				total.combine(trans);
			}
			else{
				cout << total.ISBN << " " << total.quantity << " " << total.revenue << endl;
				total.ISBN = trans.ISBN;
				total.quantity = trans.quantity;
				total.revenue = trans.revenue;
			}
		}
		cout << total.ISBN << " " << total.quantity << " " << total.revenue << endl;
	}
	else{
		cout << " no data " << endl;
		return -1;
	}
return 0;
}

