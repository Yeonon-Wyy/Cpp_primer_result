#include <iostream>
#include <regex>
#include <string>

int main() {

	/*std::regex r("[[:alpha:]]*[^c]ei[[:alpha:]]*");
	std::string s;
	std::cout << "Please enter some string : ";
	while (std::cin >> s && s != "q") {
		if (std::regex_search(s,r)) {
			std::cout << s << " violate";
		}
		else {
			std::cout << s << " no violate";
		}
		std::cout << std::endl;
		std::cout << "Please enter some string : ";
	} */

	std::string pat = "[[:alpha:]]*[^c]ei[[:alpha:]]*";
	std::smatch res;
	std::regex r(pat);

	std::string test;
	std::cout << "Please enter some string : " << std::endl;
	while (std::cin >> test && test != "q") {
		if (std::regex_search(test,res,r)) {
			std::cout << test << " violate" << "\tand find these word : " << res.str() << std::endl; 
		}
		else {
			std::cout << test << " no violate" << std::endl;
		}
		std::cout << "Please enter SOME string : " << std::endl;
	}
	return 0;
}