
#include <iostream>

#include "StrBlob.h"

int main(){
	StrBlob b1 = {"wei","yan","yu"};
	{
		StrBlob b2 = b1;
		std::cout << b2.front() << std::endl;
		b2.back() = "Yeonon";
	}
	std::cout << b1.back() << std::endl;		
}
