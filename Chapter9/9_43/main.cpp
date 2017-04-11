#include <iostream>
#include <string>

using namespace std;

void Replace(string &s,const string &oldVal,const string &newVal){
	for (auto beg = s.begin();distance(beg,s.end()) >= distance(oldVal.begin(),oldVal.end());){
		if (string{beg,beg+oldVal.size()} == oldVal){
			beg = s.erase(beg,beg+oldVal.size());
			beg = s.insert(beg,newVal.cbegin(),newVal.cend());
			advance(beg,newVal.size());
		}
		else
			++beg;
	}

}

int main(){
	string s{ "To drive straight thru is a foolish, tho courageous act." };
    Replace(s, "tho", "though");
    Replace(s, "thru", "through");
    cout << s << endl;

	return 0;
}
