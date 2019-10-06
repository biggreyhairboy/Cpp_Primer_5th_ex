#include <iostream>
using namespace std;
int main()
{
	void *ptr = nullptr;
	int x= 5, *p = &x;
	if(p)
		cout << "null ptr";
	if(*p)
		cout << "not null" <<endl;
	if(!ptr)
		cout<< "not void";
	return 0;
}
