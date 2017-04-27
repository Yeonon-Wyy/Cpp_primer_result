#include <iostream>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main(){
	unsigned size = 0;
	cout << "Input size : " ;
	cin >> size;
	cout << "Input string : ";
	char *s = new char[size+1]();
	cin.ignore();
	cin.get(s,size+1);
	cout << s << endl;
	cin.clear();
	delete []s;
	return 0;
}