#include <iostream>

#include <string>

using namespace std;

int main(){
	string str1 = "" ,str2 = "";
	cin >> str1 >> str2;

	if (str1 != str2){
		if (str1 > str2) cout << str1 << endl;
		else cout << str2 << endl;
	}
	else
		cout << "The Two string are equal" << endl;
	return 0;
}
