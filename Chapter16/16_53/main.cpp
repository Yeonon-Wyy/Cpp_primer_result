#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

//the version must be decalar before next version.
template <typename T>
std::ostream &print(std::ostream &os, const T &t) {
	return os << t;
}



template <typename T, typename... Args>
std::ostream &print(std::ostream &os, const T &t, const Args&... rest) {
	os << t << " ";
	return print(os,rest...);
}



int main() {
	int i = 42; double d = 3.14; string s = "weiyanyu";
	print(cout,i,d,s,"yeonon");	
	return 0;
}