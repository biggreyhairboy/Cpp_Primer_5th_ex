#include <iostream>
#include <vector>
#include <string>
using namespace std;
void tou(string &s)
{
	for(auto &c : s){
		c = toupper(c);
	}
}
int main(){
	string s1;
	cin >> s1;
	tou(s1);
	cout << s1 << endl;
	return 0 ;
}

