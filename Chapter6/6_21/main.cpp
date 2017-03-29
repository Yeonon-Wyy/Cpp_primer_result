#include <iostream>

using namespace std;

int compare(const int x,const int *y){
	if (x < *y)
		return *y;
	else
		return x;
}

int main(){
	int a = 5,x = 6;
	int *b = &x;
	cout << "after compare : " << compare(a,b) << endl;
	return 0;
}
