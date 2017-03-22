#include <iostream>
#include <string>
using namespace std;

int main(){
	string str1 = "weiyanyu";
	string str2 = "Weiyanyu";
	if (str1 == str2)
		cout << "the two string are equal!" << endl;
	else if (str1 < str2)
		cout << "str1 less than str2 " << endl;
	else
		cout << "str1 more than str2 " << endl;
	return 0;
}
