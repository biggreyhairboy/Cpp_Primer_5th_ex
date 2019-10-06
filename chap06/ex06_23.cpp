#include <iostream>
#include <vector>
#include <string>
using namespace std;
void print(int i, int* p)
{
	cout << p[i] << endl;
}
int main(){
	int i = 0, j[2] = {0, 1};
	print(i, j);
	return 0;
}

