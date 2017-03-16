#include <iostream>

#include <string>

using namespace std;

int main(){
	string str,str_res;
	while (cin >> str) str_res += str;
	cout << "result is : "<< str_res << endl;
	return 0;
}
