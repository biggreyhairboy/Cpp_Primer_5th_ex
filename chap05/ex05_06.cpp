#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	unsigned int score;
	cin >> score;
	//const vector<string> grades{"A++", "A", "B", "C", "D", "F"};
	string s = score == 100 ? "A++" 
						: score >= 90 ? "A" 
									  : score >= 80 ? "B"
									  				: score >= 70 ? "C"
																  : score >= 60 ? "D" : "F";
	cout << s << endl;
	return 0;
}

