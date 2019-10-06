#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
int main(){
	int a[] {10, 29, 23, 55};
	for(int i = 0; i < 4; i++)
		cout << a[i] << endl;
	for(size_t c = 0; c < 4; c++)
		cout << *(a + c) << endl;
	for(auto x: a)
		cout << x << endl;
	return 0;
}

