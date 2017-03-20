#include <iostream>
#include <string>

using namespace std;


void print_Array(string Array[],int len){
	for (int i = 0;i < len;i++)
		cout << Array[i] << " ";
	cout << endl;
}

void print_Array(int Array[],int len){
	for (int i = 0;i < len;i++)
		cout << Array[i] << " ";
	cout << endl;								//most case ,it is best not to do.
}
string sa[10];
int ia[10];
int main(){
	
	
	string sa2[10];
	int ia2[10];
	print_Array(sa,10);
	print_Array(ia,10);
	print_Array(sa2,10);
	print_Array(ia2,10);	
	return 0;
}
