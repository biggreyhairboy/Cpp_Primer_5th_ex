#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	string s = "words";
	string p1 = s + (s[s.size() - 1] != 's' ? "" : "s");
	cout << p1 << endl;
	return 0;
}

