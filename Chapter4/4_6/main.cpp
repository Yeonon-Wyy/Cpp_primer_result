#include <iostream>

using namespace std;

int main(){
	int a = 5;
	cout << "First version : " << endl;
	if (a % 2 == 0) 
		cout << "oushu" << endl;
	else
		cout << "jishu" << endl;       

	cout << "Second version : " << endl;
	
	if ((a&1) == 0)
		cout << "oushu"	<< endl;
	else
		cout << "jishu" << endl;
	return 0; 
}
