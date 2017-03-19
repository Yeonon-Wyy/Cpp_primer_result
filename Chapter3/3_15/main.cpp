#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string str = "";
	vector<string> res;
	while (cin >> str)
		res.push_back(str);
	for (string &s : res)
		cout << s << " ";
	cout << endl;
	return 0;
}
