#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	string s = "";
	cin >> s;
	for (decltype(s.size()) i = 0;i < s.size();i++){
		if (ispunct(s[i]))
			s.erase(i,1);
	}
	cout << s << endl;
	return 0;
}
