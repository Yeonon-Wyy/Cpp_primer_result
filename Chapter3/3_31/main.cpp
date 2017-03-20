#include <iostream>

using namespace std;

constexpr unsigned Array_Size = 10;
int main(){

	int a[Array_Size];
   	for (int i = 0; i < Array_Size;i++){
		a[i] = i;
	}
	for (int i = 0; i < Array_Size;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
