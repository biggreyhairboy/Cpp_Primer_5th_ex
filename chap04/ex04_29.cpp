#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	int x[10]; int *p = x;
	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p) / sizeof(*p) << endl;
	cout << "p " << sizeof(p) << endl;
	cout << "*p " << sizeof(*p) << endl;
	return 0;
}

