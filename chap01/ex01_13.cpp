#include <iostream>
using namespace std;
int main()
{
	int sum19 = 0;
	for(int x = 50; x <= 100; x++)
		sum19 += x;
	cout << sum19 << endl;

	for(int x = 10; x >=0; x--)
		cout<< x << endl;

	int x,y;
	cin >> x >> y;
	for(int counter = x; counter <= y; counter++)
		cout << counter << endl;
}
