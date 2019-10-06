#include <iostream>
#include <vector>
#include <string>
using namespace std;
void ex(int &x, int &y)
{
	int e = 0;
	e = x;
	x = y;
	y = e;
}
int main(){
	int a,b;
	cin >> a >> b;
	ex(a, b);
	cout << a << b;
	return 0;
}

