#include <iostream>


template <typename T>
auto Sum(T lhs, T rhs) -> decltype(lhs + rhs) {
	return lhs + rhs;
}

int main() {
	auto res =  Sum(123456789123456789123456, 123456789123456789123456);
	std::cout << res << std::endl;
	return 0;
}