#ifndef SCREEN_H
#define SCREEN_H
#include <string>
//#include "Windows_mgr.h"
using namespace std;
typedef string::size_type pos;
class Screen{
	friend class Windows_mgr;
public:
	Screen() = default;
	Screen(const pos width,
			const pos height);
	Screen(const char c, const pos width,
			const pos height);
	pos size() const;

	inline Screen &move(pos r, pos c)
	{
		pos row = r * Width;
		Cursor = row + c;		
		return *this;
	}

	Screen &set(char newc)
	{
		Content[Cursor] = newc;
		return *this;
	}
	Screen &set(char newc, pos r, pos c)
	{
		pos cs = r * Width + c;
		Content[cs] = newc;
		return *this;
	}
	//ostream &display(pos p);
	Screen &display(ostream &os);
	const Screen&display(ostream &os) const;
private:
	pos Cursor;
	pos Width;
	pos Height;
	string Content;
};
#endif
