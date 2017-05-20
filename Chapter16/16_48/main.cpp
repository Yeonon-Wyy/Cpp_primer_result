#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <sstream>
using std::ostringstream;

template <typename T>
string debug_rep(const T &t) {
	ostringstream ret;
	ret << t;
	return ret.str();
}

template <typename T>
string debug_rep(T *p) {
	ostringstream ret;
	ret << "pointer: " << p;
	if (p)
		ret << " " << debug_rep(*p);
	else
		ret << "null pointer";
	return ret.str();
}

string debug_rep(const string &s) {
	return '"' + s + '"';
}

string debug_rep(char *p) {
	return debug_rep(string(p));
}

string debug_rep(const char *p) {
	return debug_rep(string(p));
}


int main() {
	string s = "yeonon";
	string *sp = &s;
	cout << debug_rep(s) << endl;
	cout << debug_rep(sp) << endl;
	cout << debug_rep("weiyan") << endl;
	cout << debug_rep(1.2) << endl;
	int a = 1;
	int *b = &a;
	cout << debug_rep(a) << endl;
	cout << debug_rep(b) << endl;
	return 0;
}