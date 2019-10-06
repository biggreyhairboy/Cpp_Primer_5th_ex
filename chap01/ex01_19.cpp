#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cin>> x;
	cin>> y;
	int start, end;
	if(x >= y)
	{
		start = x; end = y;
	}
	else{
		start = y;
		end =x;
	}
	while(start >= end){
		cout << start << endl;
		start--;
	}
	return 0;
}
