#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	constexpr int u = 32;
	const int *p = &u;
	cout << "int " << sizeof(int) << endl;
	cout << "unsigned " << sizeof(unsigned) << endl;
	cout << "double " << sizeof(double) << endl;
	cout << "long " << sizeof(long) <<endl;
	cout << "char" << sizeof(char) << endl;
	cout << "unsigned char " << sizeof(unsigned char) << endl;
	cout << sizeof(p) << endl;
	return 0;
}

