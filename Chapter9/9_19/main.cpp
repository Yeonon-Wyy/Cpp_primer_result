#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(){
	list<string> ls;
	string str;
	while (cin >> str)
		ls.push_back(str);

	for (auto &s:ls)
		cout << s << " ";
	cout << endl;
	return 0;
}
