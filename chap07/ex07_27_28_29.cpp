#include <iostream>
#include <vector>
#include <string>
#include "Screen.h"
using namespace std;
int main(){
	Screen msg('t', 5, 5);
	msg.move(4, 0).set('o').display(cout);
	cout << endl;
	msg.display(cout);	
	cout << endl;
	return 0;
}

