#include <iostream>
#include <functional>
#include <string>
#include <map>
#include <climits>



int main() {
	std::map<std::string,std::function<int(int,int)>> binops = {
		{"+",[](int i,int j) { return i + j; }},
		{"-",[](int i,int j) { return i - j; }},
		{"*",[](int i,int j) { return i * j; }},
		{"/",[](int i,int j) { return j == 0? INT_MIN : i / j;}}
	};

	std::cout << binops["+"](10,5) << std::endl;
	std::cout << binops["-"](10,5) << std::endl;
	std::cout << binops["*"](10,5) << std::endl;
	std::cout << binops["/"](10,0) << std::endl;
	return 0;
}