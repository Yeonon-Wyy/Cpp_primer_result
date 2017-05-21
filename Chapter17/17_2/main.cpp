#include <iostream>
#include <tuple>
using std::tuple;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <utility>


int main() {
	tuple<string,vector<string>,std::pair<string,int>> items{"yeonon",{"wei","yan"},
														std::make_pair("yu",3)};

	for (auto s : std::get<1>(items)) {
		std::cout << s << " ";
	}	

	std::cout << std::endl;						
	return 0;
}