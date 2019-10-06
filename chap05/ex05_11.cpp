#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string str;
	getline(cin, str);
	//cannot input line break
	int counter = 0;
	for(auto &s : str)
	{
		char d = s;
		if(isalpha(s))
			d = tolower(s);
		if(d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u' || d == '\n' 
				    || d == ' ' || d == 't')
			counter++;
	}
	cout << counter << endl;
	return 0;
}

