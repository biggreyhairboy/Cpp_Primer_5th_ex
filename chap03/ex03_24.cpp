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
	//if(vec.size() < 2)
	//	cout << "no enough elements" << endl;
	//else{
	//	for(auto c = 0; c < vec.size() - 1;)
	//		cout << vec[c] + vec[++c] << endl;
	//}	
	
	if(vec.size() < 2)
		cout << "no enough elements" << endl;
	else{
		for(auto iter = vec.begin(); iter != vec.begin() + (vec.end() - vec.begin()) / 2 ; iter++)
			cout << *iter + *(vec.end() - (iter - vec.begin()) -1 ) << endl;
	}
	return 0;
}
