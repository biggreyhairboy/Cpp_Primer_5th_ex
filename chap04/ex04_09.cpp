#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	const char *cp = "hello world";
	if(cp && *cp)
		cout << "it's ok" << endl;
	return 0;
}

