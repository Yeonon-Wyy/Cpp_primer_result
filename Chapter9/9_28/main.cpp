#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

void addElement(forward_list<string> &fli,const string &s1,const string &s2){
	auto pre = fli.before_begin();
	for (auto cur = fli.begin();cur != fli.end();pre = cur++){
		if (*cur == s1){
			fli.insert_after(cur,s2);
			return;	
		}
	}
	fli.insert_after(pre,s2);
}

int main(){
	
	return 0;
}
