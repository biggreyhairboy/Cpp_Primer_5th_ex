#include <iostream>
using namespace std;
int main()
{
	int a = 5;
	auto b1 = a;
	decltype(a) b2 = 5;
	cout << typeid(b1).name() << "  " << typeid(b2).name() << endl;

	const int c = 6;
	auto d1 = c;
	decltype(c) d2 = 9;
	cout << typeid(d1).name() << "  " << typeid(d2).name()<< endl;
//show correctly on visual sudio	
	return 0;
}
