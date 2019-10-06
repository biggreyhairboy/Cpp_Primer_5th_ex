#include <iostream>
#include <vector>
#include <string>
using namespace std;
void ad(int plus)
{
	int x = plus;
	static int c;
	c++;
	cout << "c " << c << endl;
}
int main(){
	int b;
	cin >> b;
	for(int xx = 0; xx < b; xx++)
		ad(xx);
	return 0;
}

