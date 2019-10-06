#include <iostream>
#include <vector>
#include <string>
int fact(int x){
	int f = 1;
	for(int c = 1 ; c <= x; c++)
		f*= c;
	return f;
}
using namespace std;
int main(){
	int x;
	cin >> x;
	cout <<fact(x) <<endl;
	return 0;
}

