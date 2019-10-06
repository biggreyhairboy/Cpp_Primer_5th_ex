#include "NoDefault.cpp"
#include <iostream>
using namespace std;
class C{
public:
	C(const int &a): c(a){ cout << "C constructor"; };
	NoDefault c;
};
