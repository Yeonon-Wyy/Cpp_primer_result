#include<iostream>
#include<vector>

using namespace std;

int main(){
	cout << "Please Enter some number:(whitespace as split and Ctrl+D to end(UNIX)):" << endl;
	int curVal = 0,sum = 0;
	while (cin >> curVal){
		sum += curVal;
	}
	cout << "sum = " << sum << endl;
	return 0;
}
