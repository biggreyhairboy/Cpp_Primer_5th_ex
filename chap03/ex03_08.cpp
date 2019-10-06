#include <iostream>
using namespace std;
int main(){
	string s1;
	cin >> s1;
	for(int iter = 0; iter < s1.size(); iter++){
		s1[iter] = 'x';
	}
	cout << s1 << endl;
	int iter = 0;
	while(iter < s1.size()){
		s1[iter] = 't';
		iter++;
	}
	cout << s1;
	return 0;
}
