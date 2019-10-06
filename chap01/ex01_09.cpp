#include <iostream>
using namespace std;
int main()
{
	int x = 50;
	long y = 0;
	while(x <= 100){
		y = x + y;
		x++;
	}
	std::cout << "the result is " << y << std::endl;
}
