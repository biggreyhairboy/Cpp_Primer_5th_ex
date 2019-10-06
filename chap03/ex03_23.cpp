#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	vector<int> vec{1, 2, 4, 5, 6, 23, 239,32, 23,0};
	for(auto it = vec.begin(); it != vec.end(); it++)
	{
		*it = *it * 2;
	}
	for(auto v : vec)
		cout << v << endl;
	return 0;
}

