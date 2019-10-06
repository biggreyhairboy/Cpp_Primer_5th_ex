#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;
inline bool isShorter(const string &s1, const string &s2)
{
   	return s1.size() < s2.size();
}
int main(){
	cout << isShorter("ab", "bc") << endl;
	return 0;
}

