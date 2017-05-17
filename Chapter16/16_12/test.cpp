#include "Blob.h"
#include <iostream>

int main() {
	Blob<int> bi = {1,2,3,4,5};
	std::cout << bi.back() << std::endl;
	bi.push_back(10);
	std::cout << bi.back() << std::endl;
	return 0;
}