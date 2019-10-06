#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef int (*ptr)(int, int);
int pp(int a, int b)
{
	cout << "plus" << endl;
	return a + b;
}

int mm(int a, int b)
{
	cout << "minus" << endl;
	return a - b;
}

int mt(int a, int b)
{
	cout << "multiply" << endl;
	return a * b;
}

int dv(int a, int b){
	cout << "divide" << endl;
	return (a / b);
}

int main(){
	//vector<int (*)(int, int)> vec_pp{pp};
	vector<ptr> vec{pp};
	vec.push_back(mm);
	vec.push_back(mt);
	vec.push_back(dv);
	int a = 5, b = 2;
	for(auto p : vec)
	{
		p(a, b);
	}
	return 0;
}

