#include <iostream>
using namespace std;
int main()
{
	const int a = 99;
	int b = 100;
	const int *buf = &a;
	int *const constptr = &b;
	return 0;
}
