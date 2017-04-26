#include <iostream>
#include <memory>
#include <string>

using std::cin;
using std::cout;
using std::endl;

void testUniquePtr(std::unique_ptr<std::string> u){
	cout << *u.get() << endl;
}

int main(){
	std::unique_ptr<std::string> u(new std::string("weiyanyu"));
	//std::unique_ptr<std::string> u2 = u;
	//testUniquePtr(u);
	cout << *u.get() << endl;
	return 0;
}

/*
	g++ and clang++ both give an call to deleted constructor of
      'std::unique_ptr<std::string>' error
*/