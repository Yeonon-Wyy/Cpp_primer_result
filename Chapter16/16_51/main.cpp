#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

template <typename T, typename... Args>
void foo(const T &t, const Args& ... rest) {
	cout << sizeof...(Args) << endl;
	cout << sizeof...(rest) << endl;
}

int main() {
	int i = 0; double d = 3.14; string s = "yeonon";
	//foo(i,s,42,d);
	//foo(s,42,"hi");
	//foo(d,s);
	//foo("hi");
	double d2;
	foo(i,42,d2,d,s);
}