#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	list<string> ls;
	string str = "";
	while (cin >> str)
		ls.push_back(str);

	string toFindStr = "yu";
	cout << count(ls.begin(),ls.end(),toFindStr) << endl;
	return 0;
}
