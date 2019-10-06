#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Example{
public:
	static double rate;
	static const int vecsize = 20;
	static vector<double> vec;
};

double Example::rate;
vector<double> Example::vec(vecsize);

int main(){
	Example ae;
	for(auto x : Example::vec)
		cout << x << endl;
	return 0;
}

