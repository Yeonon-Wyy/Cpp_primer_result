#include <iostream>

using namespace std;

int main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	for (int *pbeg = a,*pend = &a[10];pbeg != pend;pbeg++){
		*pbeg = 0;
	}
	for (int *pbeg = a,*pend = &a[10];pbeg != pend;pbeg++){
		cout << *pbeg << " ";
	}
	cout << endl;

	return 0;
}
