#include <iostream>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main(){
	vector<unsigned> score_count(11, 0);
	unsigned grade;
	while(cin >> grade)
	{
		if(grade <= 100)
		{
			*(score_count.begin() + grade/10) += 1;		
		}
	}	
	for(auto a : score_count)
		cout << a << " ";
	return 0;
}

