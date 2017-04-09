#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(){
	deque<string> ds;
	string str;
	while (cin >> str)
		ds.push_back(str);

	for (auto &s:ds){
		cout << s << " ";
	}
	cout << endl;
	return 0;
}
