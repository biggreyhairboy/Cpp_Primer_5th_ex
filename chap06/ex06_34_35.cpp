#include <iostream>
#include <vector>
#include <string>
using namespace std;
int factorial(int val)
{
	if( val > 1 )
		return factorial( val- 1) * val;
	return 1;
}
int main(){
	int a;
	cin >> a; 
	cout << factorial(a);
	return 0;
}

