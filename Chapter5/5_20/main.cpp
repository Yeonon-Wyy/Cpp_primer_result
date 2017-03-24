#include <iostream>
#include <string>

using namespace std;

int main(){
	string str,temp;
	while (cin >> str){
		if (str == temp){
			cout << "repete word is " << str << endl;
			break;
		}
		temp = str;
			
	}
	if (cin.eof()) cout << "repete does not exist" << endl;
	return 0;
}
