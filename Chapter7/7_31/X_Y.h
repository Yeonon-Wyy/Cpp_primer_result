#ifndef X_Y_H
#define X_Y_H

class Y;

class X{
	Y *y = nullptr; //because We has not define Y,just declara it.To avoid invaild pointer,we initialize it nullptr(c++11,in C we just use NULL ,NULL just 0,But nullptr not 0)
};

class Y{
	X *x;
};


#endif
