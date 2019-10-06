#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	int sum = 0, val = 1;
	while(val <= 10)
		sum += val++;
	cout << sum << endl;
	return 0;
}

