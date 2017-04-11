#include <iostream>
#include <string>

using namespace std;

void addFix(string &name,const string &prefix,const string &suffix){
	name.insert(0,prefix);
	//maybe could try this way:
	//name.insert(name.begin(),prefix.begin(),prefix.end());
	name.append(suffix);
}

int main(){
	string name = "Yeonon";
	string prefix = "Mr.",suffix = "Wei";
	addFix(name,prefix,suffix);
	cout << name << endl;	
	return 0;
}
