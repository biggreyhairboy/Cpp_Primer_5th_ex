#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	int i0[]{10, 2, 2};
	int i1[]{2, 2, 2};
	vector<int> v1(10, 5);
	vector<int> v2(10, 5);
	for(int *n = begin(i0); n < end(i0); n++)
	{
		if(*n != *(begin(i1) + (n - begin(i0))))
			cout << "not equal arrays" << endl;
	}
	if(v1 == v2)
		cout << "equal vecs" << endl;
	return 0;
}

