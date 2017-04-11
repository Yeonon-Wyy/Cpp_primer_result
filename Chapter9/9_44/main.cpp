#include <iostream>
#include <string>

using namespace std;

void Replace(string &s,const string &oldVal,const string &newVal){
	for (string::size_type i = 0;i < s.size();++i){
		if (s.substr(i,oldVal.size()) == oldVal){
			s.replace(i,oldVal.size(),newVal);
			i += newVal.size() - 1;
		}
	}
}

int main(){
	string s{ "To drive straight thru is a foolish, tho courageous act." };
    Replace(s, "tho", "though");
    Replace(s, "thru", "through");
    cout << s << endl;
	return 0;
}
