#include <iostream>
#include <string>

using namespace std;

int main(){
	string str1,str2;
	cin >> str1 >> str2;
	do{
		cout << "Enter two string : " << endl;
		if (str1.size() > str2.size()) cout << "longer is " << str1 << endl;
		else if (str1.size() == str2.size()) cout << "They are equal " << endl;
		else cout << "longer is " << str2 << endl;
	}while (cin >> str1 >> str2);
	return 0;
}
