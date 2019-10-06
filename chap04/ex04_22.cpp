#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	unsigned i;
	cin >> i;
//	cout << ((i >= 60) ? ((i > 75) ? " high pass" : "pass") 
//					  : "fail");
	if( i >= 60 )
		if( i > 75 )
			cout << "hass pass";
		else
			cout << "pass";
	else
		cout << "fail";
	return 0;
}

