#include <iostream>
#include <string>
#include "../include/Sales_item.h"
using namespace std;
int main()
{
	Sales_item currentitem, item;
	int counter(0);
	if(cin >> currentitem){
		counter++;
	while(cin >> item){
		if(currentitem.isbn() == item.isbn())
			counter += 1;
		else{
			cout << "book " << currentitem.isbn() << " has be sell " << counter << endl;
			counter = 0;
			currentitem = item;
		}
	}
	}
	else{
		cout << "No sales record!"<< endl;
	}

	return 0;
}
