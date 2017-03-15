#include <iostream>

#include <string>

using namespace std;

int main(){
	string str1 = "",str2 = "";
	cin >> str1 >> str2;

	if (str1.size() != str2.size()){
		if (str1.size() > str2.size()) cout << str1 << endl;
		else cout << str2 << endl;

	}
	else
		cout << "The two string have the same length()" << endl;
	return 0;
}
