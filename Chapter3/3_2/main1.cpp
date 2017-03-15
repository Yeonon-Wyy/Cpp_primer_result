#include <iostream>

#include <string>

using namespace std;

int main(){
   	string str;
	while (getline(cin,str)){
		cout << "one line by one line" << endl;
		cout << str << endl;
	}



	return 0;
}
