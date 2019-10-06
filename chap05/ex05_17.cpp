#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	vector<int> v1{1, 4, 2, 9, };
	vector<int> v2{2, 4, 2};
	vector<int>::size_type si = (v1.size() >= v2.size()) ? v2.size() : v1.size(); 
	vector<int>::size_type equalcounter(0);	
	for(vector<int>::size_type i = 0; i < si; i++){
		if(v1[i] == v2[i])
		   equalcounter++;	
		else
			cout << "not a pre subsets";
	}
	if(si == equalcounter)
		cout << "is a pre subsets";
	return 0;
}

