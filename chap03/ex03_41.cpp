#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
int main(){
	int a[] {10, 2, 10};
	vector<int> v(begin(a), end(a));
	return 0;
}

