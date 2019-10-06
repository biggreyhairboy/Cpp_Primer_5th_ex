#include <iostream>
#include <vector>
#include <string>
using namespace std;
inline int intdivint(int a, int b){
	if(b == 0)
		throw std::overflow_error("divided by zero");
	return a / b;
}
int main(){
	int a, b;
	while(cin >> a >> b)
	{
		try{
			cout << intdivint(a, b) << endl;
		}
		catch(overflow_error e)
		{
			cout << e.what() << "what's go on" << endl;
			string s;
			cin>>s;
			if(s == "yes")
				continue;
			else
				break;
		}
	}
	return 0;
}

