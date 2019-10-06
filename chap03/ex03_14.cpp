#include <iostream>
#include <vector>
using namespace std;
int main(){
	int a;
	vector<int> vec;
	while(cin >> a){
		vec.push_back(a);
	}
	for(auto x : vec){
		cout << x << endl;
	}
	return 0;
}
