#include "Windows_mgr.h"	

Screen &Windows_mgr::clear(Screen &scr){
//	for(pos i = 0; i < scr.Cursor; i++)
//		scr.Content = string(scr.Width * scr.Height, ' ');
//		return scr;
	scr.Content = string(scr.Width * scr.Height, ' ');
	return scr;
}

