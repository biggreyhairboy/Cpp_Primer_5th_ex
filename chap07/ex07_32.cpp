#include <iostream>
#include <vector>
#include <string>
#include "Screen.h"
#include "Windows_mgr.h"

using namespace std;
int main(){
	Screen s('x', 7, 5);
	Windows_mgr wm;
	s.display(cout);
	wm.clear(s);
	cout << "line break" << endl;
	s.display(cout);

	return 0;
}

