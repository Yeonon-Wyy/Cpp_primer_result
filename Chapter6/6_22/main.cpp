#include <iostream>

using namespace std;

void swapPoint(int *&x,int *&y){								//in C++ ,if want to change vaule ,must use reference although point
	auto temp = x;
	x = y;
	y = temp;
}

int main(){
	int a = 5,b = 6;
	int *x = &a,*y = &b;
	cout << "Before Swap point \n" << "x addr is : " << x << "\n" << "y addr is : " << y << endl;
    swapPoint(x,y);
	cout << "After Swap point \n " << "x addr is : " << x << "\n" << "y addr is : " << y << endl;	
	return 0;
}
