#include <iostream>
#include <string>
#include "../include/Sales_item.h"
using namespace std;
int main()
{
	Sales_item aitem, item;
	Sales_item sum;
	cin >> aitem;
	while(cin >> item){
		if(aitem.isbn() == item.isbn())
			sum += item;
	}
	cout << sum << endl;
	return 0;
}
