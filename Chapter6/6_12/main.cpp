#include <iostream>

using namespace std;

void mySwap(int &x,int &y){
	int temp = x;
	x = y;
	y = temp;
}

int main(){
	int x = 5,y = 6;
	cout << "Before swap : " << "\n"
		 << "x = " << x << "\t" << "y = " << y << endl;

	mySwap(x,y);

	cout << "After swap : " << "\n"
		 << "x = " << x << "\t" << "y = " << y << endl;


	return 0;
}
