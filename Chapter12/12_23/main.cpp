#include <iostream>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main(){
	const char *c1 = "Hello World!";
	const char *c2 = "Yeonon";
	unsigned len = std::strlen(c1) + std::strlen(c2) + 1;
	char *cp = new char[len]();
	std::strcat(cp, c1);
	std::strcat(cp, c2);
	std::cout << cp << std::endl;


	const std::string s1 = "Hello World!";
	const std::string s2 = "Weiyanyu";
	std::cout << s1 + s2 << std::endl;

	delete []cp;



	return 0;
}