#ifndef SCREEN_H
#define SCREEN_H

#include <string>

class Screen{
public:
	using pos = std::string::size_type;

	Screen() = default;
	Screen(pos ht,pos wd):
			height(ht),width(wd),contents(ht*wd,' ') { }
	Screen(pos ht,pos wd,char c) : 
			height(ht),width(wd),contents(ht*wd,c) { }

	char get() const { return contents[cursor]; }
	char get(pos r,pos c);
	Screen &move(pos r,pos c);
	void some_member() const { ++access_ctr; }


private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	mutable size_t access_ctr;

};





#endif



