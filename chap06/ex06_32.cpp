#include <iostream>
#include <vector>
#include <string>
using namespace std;
int &get(int *arry, int index){
	return arry[index];
}
int main(){
	int ia[10];
	for(int i = 0; i != 10; i++)
	{
		get(ia, i) = i;
	}
	for(auto x : ia)
		cout << x << endl;
	return 0;
}

