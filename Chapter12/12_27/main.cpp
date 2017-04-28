#include "TextQuery.h"


int main(int argc, char const *argv[])
{
	std::ifstream input(argv[1]);
	TextQuery tq(input);
	while (true){
		std::cout << "enter you want to find or q to quit : " ;
		std::string s;
		if (!(std::cin >> s) || s == "q") break;
		print(std::cout,tq.query(s));
	}
	return 0;
}

