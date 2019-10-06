#include <iostream>
#include <vector>
#include <string>
#include "Sales_data.h"
using namespace std;
int main(){
	Sales_data item0("202-1", 2 , 25.0);
	Sales_data item1(cin);
	print(cout , item0);
	cout << endl;
	print(cout , item1);
	return 0;
}


