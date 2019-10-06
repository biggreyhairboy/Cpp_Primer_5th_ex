#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
int main(){
	string a;
	vector<string> vec;
	while(cin >> a){
		vec.push_back(a);
	}
	for(auto v : vec){
		for(auto &x: v)
		{
			x = toupper(x);
		}
		cout << v << endl;
	}
	return 0;
}
