#include "StrBlob.h"
#include <iostream>

int main() {
	StrBlob stb({"yeonon","weiyanyu"});
	StrBlobPtr stbp(stb);


	for (auto b = stbp; b != stb.end(); ++b) {
		std::cout << b.deref() << std::endl;
	}




	std::cout << stbp.deref() << std::endl;


	return 0;
}