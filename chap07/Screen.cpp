#include <string>
#include <iostream>
#include "Screen.h"
using namespace std;
Screen::Screen(const pos width, const pos height): Width(width), Height(height), Content(width * height, ' '){}

Screen::Screen(const char c, const pos width, const pos height): Width(width),Height(height), Content(width * height, c) {}

Screen &Screen::display(ostream &os)
{
	for(pos i = 0; i < Cursor; ){
		if(++i % Width == 0)
		{
			os << "*" ;
			if(i / Width >= 1)
				cout << endl;
		}
		else
			os << "*";
	}
	os << Content[Cursor] << endl;	
	return *this;
}
