#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	string repstr = "";
	string word;
	cin>> word;
	repstr = word;
	while(cin >> word){
		if(word == repstr){
			if(isupper(repstr[0])){	
				cout << repstr << endl;
				break;
			}
		}	
		else{
			repstr = word;
		}
	}
	return 0;
}

