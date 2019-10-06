#include <iostream>
#include <vector>
#include <string>
#include "Sales_data.h"
using namespace std;
int main(){
	Sales_data total(cin);
	if(!(total.ISBN).empty()){
		Sales_data trans;
		while(read(cin, trans)){
			if(total.ISBN == trans.ISBN)
			{
				total.combine(trans);
			}
			else{
				print(cout, total);
				total.ISBN = trans.ISBN;
				total.quantity = trans.quantity;
				total.revenue = trans.revenue;
			}
		}
		print(cout, total);
	}
	else{
		cout << " no data " << endl;
		return -1;
	}
	return 0;
}


