#include <iostream>
using namespace std;
int main()
{
	int x = 5;
	int y = 10;
	int *p = &x;
	cout << *p << endl;
	p = &y;
	cout << *p  << endl;
	*p = 15;
	cout << y << endl;
	return 0;
}
