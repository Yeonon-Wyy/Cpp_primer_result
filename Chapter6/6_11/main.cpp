#include <iostream>

using namespace std;

void reset(int &x){
	x = 0;
}

int main(){
	int x = 5;
	cout << "before reset  x = " << x << endl;
	reset(x);
	cout << "after reset x = " << x << endl;
	return 0;
}
