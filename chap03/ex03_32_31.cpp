#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	vector<int> vec01(10, 5);
	vector<int> vec02(vec01);
	for(auto v : vec02)
		cout << v << endl;
	return 0;
}


