#include <iostream>

#include <string>

using namespace std;

int main(){
	string str = "Hello World";
	cout << "Use range for loop" << endl;
	for (char &c : str){            //if use char (not char & or auto ,will have no change)
		c = 'X';
	}
	cout << str << endl;
	
	str = "Hello World";	
	cout << "Use old for loop" << endl;
	for (decltype(str.size()) i = 0;i < str.size();i++)
		str[i] = 'X';
	cout << str << endl;
	
	cout << "Use  while loop" << endl;
	str = "Hello World";
	decltype(str.size()) index = 0;
	while (index < str.size()){
		str[index] = 'X';
		index++;
	}

	cout << str << endl;
	
	return 0;
	
}
