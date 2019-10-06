#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string str;
	getline(cin, str);
	int counter(0);
	for(string::iterator iter = str.begin(); iter != str.end() - 1; )
	{
	    string comb = "";
		comb += *iter;
	    comb +=	*(++iter); 
		if(comb == "ff" || comb == "fl" || comb == "fi")
			counter++;
	}
	cout << counter << endl;
	return 0;
}

