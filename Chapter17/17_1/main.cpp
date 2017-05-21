#include <iostream>
#include <tuple>
#include <string>

int main() {
	std::tuple<int,int,int> ints{10,20,30};
	std::cout << std::get<0>(ints) << std::endl;

	typedef decltype(ints) Integer;
	std::cout << std::tuple_size<Integer>::value << std::endl;

	std::tuple_element<1, Integer>::type cnt = std::get<1>(ints);
	std::cout << cnt << std::endl;
	return 0;
}