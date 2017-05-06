#include "String.h"

#include <vector>
#include <iostream>

int main(){
	std::cout << "Normal test" << std::endl;
	const char *name = "Yanyuwei";
	String s(name);
	std::cout << s.size() << std::endl;
	std::cout << s.length() << std::endl;
	std::cout << s.c_str() << std::endl;

	String s1 = s;
	std::cout << s1.size() << std::endl;
	std::cout << s1.length() << std::endl;
	std::cout << s1.c_str() << std::endl;

	String s2;
	s2 = s;
	std::cout << s2.size() << std::endl;
	std::cout << s2.length() << std::endl;
	std::cout << s2.c_str() << std::endl;
	
	std::cout << std::endl;
	std::cout << "vector test" << std::endl;
	std::vector<String> v;
	v.push_back(String("weiyanyu"));
	v.push_back("Yeonon");

	for (auto &s : v) {
		std::cout << s.c_str() << std::endl;
	}
	return 0;
}