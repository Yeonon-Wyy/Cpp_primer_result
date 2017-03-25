#include <iostream>

using namespace std;

void mySwap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	int x = 5,y = 6;
	mySwap(&x,&y);
	cout << "after swap " << "\n"
		 << "x = " << x << "\t" <<"y = " << y << endl;
	return 0;
}
