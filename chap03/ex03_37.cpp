#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	const char ca[] = {'h', 'e', 'l', 'p', 'o'};
	const char *p = ca;
	while(*p){
		cout << *p << endl;
		++p;
	}
	return 0;
}

