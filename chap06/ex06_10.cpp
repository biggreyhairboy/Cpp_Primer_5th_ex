#include <iostream>
#include <vector>
#include <string>
using namespace std;
void ex(int* p, int *q)
{
	int x =0;
	x = *p;
	*p = *q;
	*q =x;
}
int main(){
	int i,j;
	cin >> i >> j;
	ex(&i, &j);
	cout << i << " " << j << endl;
	return 0;
}

