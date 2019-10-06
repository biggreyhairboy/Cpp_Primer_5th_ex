#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string str;
	cin >> str;
	int counter = 0;
	for(auto &s : str)
	{
		char d = tolower(s);
		if(d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u')
			counter++;
	}
	cout << counter << endl;
	return 0;
}

