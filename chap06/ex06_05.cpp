#include <iostream>
#include <vector>
#include <string>
using namespace std;
double ab(double x)
{
	return (x>=0) ? x : -x;
}
int main(){
	double x;
	cin >> x;
	cout << ab(x);	
	return 0;
}
