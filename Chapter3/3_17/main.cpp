#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main(){
	vector<string> res;
	string str;
	while (cin >> str)
		res.push_back(str);
	for (string &s : res){
			for (char &c : s){
			c = toupper(c);
		}
		cout << s << " ";
	}
	cout << endl;
		
	return 0;
}
