#include <iostream>
#include <bitset>

int fib(int x) {
	return x < 2 ? 1 : (fib(x - 1) + fib(x - 2));
}

int main() {
	std::bitset<32> bit_1("01000000010000100101110");
	std::cout << bit_1 << std::endl;

	std::bitset<32> bit_2;

	for (int i = 1; i <= 7; ++i) {
		bit_2.set(fib(i));
	}

	std::cout << bit_2 << std::endl;
	return 0;
}