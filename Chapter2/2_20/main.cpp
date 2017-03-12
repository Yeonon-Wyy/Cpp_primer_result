#include <iostream>

using namespace std;

int main(){
	int i = 42;
	int *p1 = &i;
	cout << "p1 point addr is " << p1 << endl;
	cout << "p1 point value is " << *p1 << endl;
	*p1 = *p1 * *p1;
	cout << "after change:" << "\n"
	   	 << "p1 point addr is " << p1 << "\n"
	 	 << "p1 point value is " << *p1 << endl;	 
	
	return 0;
}
