#include <iostream>
#include <vector>
#include <string>
using namespace std;
void reset(int &i){
	i = 6;
}
int main(){
	int i;
	cin >>i;
	reset(i);
	cout << i;
	return 0;
}

