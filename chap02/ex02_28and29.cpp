#include <iostream>
using namespace std;
int main()
{
	int i, *const cp = &i;
	int *p1, *const p2 = &i;
	const int ic = 5, &r = ic;
	const int *const p3 = &i;
	const int *p;
	i = ic;
//	p1 = p3;
	i = ic;
//	ic = p3;
	p1 = p2;
	ic = *p3;
	return 0;
}
