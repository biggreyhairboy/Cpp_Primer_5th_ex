#include <iostream>
#include <vector>
using namespace std;
int main(){
	string a;
	vector<string> vec;
	while(cin >> a){
		vec.push_back(a);
	}
	for(auto x : vec){
		cout << x << endl;
	}
	return 0;
}
