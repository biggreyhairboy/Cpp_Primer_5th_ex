#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
int main(){
	vector<int> v(10, 32);
	int ai[11];
	for(auto iter = v.begin(); iter != v.end(); iter++)
	{
		ai[iter - v.begin()] = *iter;
	}
	for(size_t x = 0; x < 11; x++)
		cout << *(ai + x) << endl;
	return 0;
}

