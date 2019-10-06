#include <iostream>
using namespace std;
int main(){
	string s1;
	cin >> s1;
	for(decltype(s1.size()) iter = 0; iter < s1.size(); iter++){
		s1[iter] = 'x';
	}
	cout << s1;
	return 0;
}
