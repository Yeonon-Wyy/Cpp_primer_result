#include "Screen.h"


char Screen::get(pos r,pos c){
	pos row = r * width;
	return contents[row + c];
}


Screen &Screen::move(pos r,pos c){
	pos row = r * width;
	cursor = row + c;
	return *this;
}


Screen &Screen::set(char c){
	contents[cursor] = c;
	return *this;
}


Screen &Screen::set(pos r,pos col,char c){
	contents[r * width + col] = c;
	return *this;
}

//if member define in the cpp,will can't use inline.
//otherwise will appear Undefine error(At least use g++)


