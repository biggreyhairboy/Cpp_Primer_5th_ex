#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
int main(){
	string str01("hell0o");
	string str02("  ");
	if(str01 != str02)
		cout << "not equal strings" << endl;
	char a01[10] = "abc";
	char a02[10] = "bcd";
	if(strcmp(a01, a02) < 0)
		cout << "01 < 02" << endl;

	return 0;
}

