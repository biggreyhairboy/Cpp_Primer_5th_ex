#include <iostream>
#include <cctype>
using namespace std;
int main(){
	string s1;
	string s2 = "";
	cin >> s1;
	for(auto p : s1){
		if(!ispunct(p))
			s2 += p;
	}
	cout << s2;
	return 0;
}
