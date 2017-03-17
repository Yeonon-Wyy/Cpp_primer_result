#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

int main(){
	const string s = "Keep out!";

	for (const char &c : s){
		cout << typeid(c).name() << endl;
		break;
	}

	int a  = 5;
	cout << typeid(a).name() << endl;
	return 0;
}
