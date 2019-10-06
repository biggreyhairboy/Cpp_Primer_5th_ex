#include <iostream>
#include <vector>
#include <string>
using namespace std;
void ex_ptr(int *&p, int *&q)
{
	int *e = p;
	p = q;
	q = e;
}
int main(){
	int m = 0, n = 0;
	int *x = &m, *y = &n;
	cin >> m >> n;
	ex_ptr(x, y);
	cout << *x << " " << *y << endl;
	return 0;
}

