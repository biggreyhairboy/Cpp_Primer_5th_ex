#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	int a[10];
	int b[10];
	for(size_t i = 0; i < 10; i++){
		a[i] = i+ 1;
	}
	for(size_t i = 0; i < 10; i++){
		b[i] = a[i];
	}
	return 0;
}

