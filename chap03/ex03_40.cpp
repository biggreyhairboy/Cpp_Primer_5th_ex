#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
int main(){
	char a01[10] = "abc";
	char a02[10] = "bcd";
	char a03[20];
	strcpy(a03, a01);
	strcat(a03, a02);
	cout << strlen(a02) << endl;
	string s(begin(a03), end(a03));
	cout << s << endl;
	return 0;
}

