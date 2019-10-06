#include <iostream>
using namespace std;
int main()
{
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype((a)) d = a;
	++c;
	++d;
	cout << a << b << b << d <<endl;
	return 0;
}
