#include <iostream>

#include <string>

using namespace std;

int main(){
	string str = "Hello World";
	for (char c : str){            //if use char (not char & or auto ,will have no change)
		c = 'X';
	}
	cout << str << endl;
	return 0;
}
