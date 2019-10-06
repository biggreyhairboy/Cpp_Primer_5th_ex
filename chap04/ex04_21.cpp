#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	vector<int> vec{8, 42, 23, 42};
	for(auto &v : vec)
		v = (v / 2 == 1) ? v : v * 2;
	for (auto v : vec)
		cout << v << endl;
	return 0;
}

