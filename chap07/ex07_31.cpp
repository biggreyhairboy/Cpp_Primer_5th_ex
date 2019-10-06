#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Y;
class X{
	Y *yptr;
};

class Y{
	X &xref;
};

int main(){
	return 0;
}

