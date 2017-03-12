#include <iostream>

using namespace std;

int main(){
	int *p = 0;
	if (!p){
		cout << "p is empty" << endl;
		cout << "It is " << p << endl;
	}
	int a = 5;
	p = &a;
	cout << "p addr is (after change)" << p << endl;
	cout << "p point value is : " << *p << endl;
	return 0;
}
