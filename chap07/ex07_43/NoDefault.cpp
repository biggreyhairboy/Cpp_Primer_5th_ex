#include <iostream>
using namespace std;
class NoDefault{
public:
	NoDefault(const int &i){ nd = i; cout << "NoDefault con" << endl; };
	int nd;
	
};
