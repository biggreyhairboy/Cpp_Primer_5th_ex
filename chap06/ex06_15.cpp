#include <iostream>
#include <vector>
#include <string>
using namespace std;
string::size_type find_char(const string &s, char &c, string::size_type &occurs)
{
	auto ret = s.size();
	occurs = 0;
	for(decltype(ret) i = 0; i != s.size(); ++i)
	{
		if(s[i] == c)
		{
			if (ret == s.size())
				ret = i;
			++occurs;
		}
	}
	return ret;
}
int main(){
	string s = "abcedef";
	char c = 'e';
	string::size_type oc = 0;
	find_char(s, c, oc);
	cout << oc << endl;
	return 0;
}

