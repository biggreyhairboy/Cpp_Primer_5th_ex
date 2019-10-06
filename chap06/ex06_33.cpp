#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> output_vec(vector<int> vec)
{
	if(!vec.empty())
	{
		cout << *(vec.end() - 1);
		vec.pop_back();
		return output_vec(vec);
    }
	return {};
}
int main(){
	vector<int> v{3, 2, 1};
	output_vec(v);
	return 0;
}

