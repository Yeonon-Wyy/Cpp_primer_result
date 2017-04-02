#include "Screen.h"

using namespace std; //for convinue

inline
char Screen::get(pos r,pos c){
	pos row = r * width;
	return contents[row + c];
}

inline
Screen &Screen::move(pos r,pos c){
	pos row = r * width;
	cursor = row + c;
	return *this;
}


