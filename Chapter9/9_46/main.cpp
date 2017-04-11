#include <iostream>
#include <string>

using namespace std;

void addFix(string &name,const string &prefix,const string &suffix){
	name.insert(0,prefix);
	name.insert(name.end(),suffix.begin(),suffix.end());
}

int main(){
	string name = "Yeonon";
	string prefix = "Mr.";
	string suffix = " Wei";
	addFix(name,prefix,suffix);
	cout << name << endl;

	return 0;
}
