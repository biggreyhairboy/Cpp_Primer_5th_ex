#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	vector<string> vec{"temp", "forever", "now"};
	vector<string>::iterator iter = vec.begin();
	cout << *iter++ << endl;;
//	cout << (*iter)++ << endl;
	*iter->empty();
	iter->empty();
	++*iter;
	iter++->empty();
	return 0;
}

