#ifndef WINDOWS_MGR_H
#define WINDOWS_MGR_H
#include <string>
#include "Screen.h"
using namespace std;
class Windows_mgr{
public:
	typedef string::size_type pos;
	Screen &clear(Screen &scr);
};

//Screen &Windows_mgr::clear(Screen & scr){
//	for(pos i = 0; i < scr.Cursor; i++)
//		scr.Content = string(scr.Width * scr.Height, ' ');
//		return scr;
//}

#endif

