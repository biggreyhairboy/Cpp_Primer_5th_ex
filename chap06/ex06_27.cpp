#include <iostream>
#include <vector>
#include <string>
using namespace std;
int variable_parameters(initializer_list<int> il)
{
	int sum = 0;
	for(initializer_list<int>::iterator iter = il.begin(); iter != il.end();)	
		sum += *iter++;
	return sum;
}
int main(){
//	vector<int> lint;
//	int x;
//	while(cin >> x)
//		lint.push_back(x);	
	initializer_list<int> lint{1, 3};
	cout << variable_parameters(lint) << endl;
	return 0;
}

