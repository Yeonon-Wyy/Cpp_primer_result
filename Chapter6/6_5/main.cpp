#include <iostream>

using namespace std;

int myAbs(int val){
	if (val < 0)
		return (-val);
	else
		return val;
}

int main(){
	cout << "Enter number : " << endl;
	int val = 0;
	cin >> val;
	cout << "result = " << myAbs(val) << endl;
	return 0;
}
