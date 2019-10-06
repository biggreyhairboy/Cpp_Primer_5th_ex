#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	int i(0);
	vector<int> vec;
	while(cin >> i)
	{
		vec.push_back(i);	
	}
	if(vec.size() < 2)
		cout << "no enough elements" << endl;
	else
	{
		for(vector<int>::iterator iter = vec.begin(); iter < vec.end() -1 ;)
		{
			cout << *iter << endl;
			cout << *iter + *++iter << endl;
		}
	}
	return 0;
}
