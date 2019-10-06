#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	int a = 5;
	int *i = &a;
	*i = 0;
	cout << a << endl;
	return 0;
}

