#include <iostream>
using namespace std;
int main()
{
	int x;
	int y;
	cin >> x >> y;
	int counter = x;
	while(counter < y){
		cout << counter << endl;
		counter++;
	}
}
