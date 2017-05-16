#include "compare.h"
#include <iostream>
#include <string>

int main() {
	std::cout << compare(1, 2) << std::endl;
	std::cout << compare("yeonon", "weiyanyu") << std::endl;
	std::cout << compare(std::string("C++ primer"), std::string("C++ primer 5th")) << std::endl;
	return 0;
}