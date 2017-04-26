
#include <iostream>
#include <fstream>

#include "StrBlob.h"

int main(int argc, char const *argv[])
{
	std::ifstream in(argv[1]);
	StrBlob blob;
	for (std::string str; std::getline(in,str);){
		blob.push_back(str);
	}

	try{
		for (StrBlobPtr pbeg(blob.begin()),pend(blob.end());
			pbeg != pend; pbeg.incr()){
			std::cout << pbeg.deref() << std::endl;
		}
	}
	catch (std::out_of_range e){
		return 0;
	}
	catch (std::runtime_error e){
		return 0;
	}
	return 0;
}
