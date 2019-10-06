#include <iostream>
#include <vector>
#include <string>
using namespace std;
using Iter = vector<int>::iterator;

void output_vec(Iter begin, Iter end){
	if(begin != end){
		cout << *begin << endl;
		#ifndef DEBUG
			cout << "size of vec " <<  (end - begin) << endl;
		#endif 
		output_vec(++begin, end);
	}
	return ;
}
int main(){
	vector<int> v{1, 2, 3};
	output_vec(v.begin(), v.end());
	return 0;
}

