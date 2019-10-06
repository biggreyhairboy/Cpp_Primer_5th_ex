#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	vector<int> ivec{5, 4,932, 32, 1};
	vector<int>::size_type cnt = ivec.size();
	for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, --cnt)
		ivec[ix] = cnt;
	for(auto x : ivec)
		cout << x << endl;
	return 0;
}

