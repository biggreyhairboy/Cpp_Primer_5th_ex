#include <iostream>
#include <vector>
#include <string>
using namespace std;
int ex(int x, int *py)
{
	return (x > *py) ? x : *py;
}
int main(){
	int a, *pb;
	cin >> a >> *pb;
	cout << ex(a, pb) << endl;
	return 0;
}

