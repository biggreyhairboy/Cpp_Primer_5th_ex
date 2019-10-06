#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	int i = 0;
	int *ptr = &i;
	vector<int> vec{1, 4, 54};
	int ival = 23;
	*ptr != 0 && *ptr++;
	ival ++ && ival;
	vec[ival++] <= vec[ival];
	return 0;
}

