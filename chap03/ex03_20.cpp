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
		for(auto c = 0; c < vec.size() / 2;)
			cout << vec[c] + vec[vec.size()-1 -c++] << endl;;
	}
	return 0;
}
