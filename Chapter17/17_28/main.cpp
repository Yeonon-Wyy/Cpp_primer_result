#include <iostream>
#include <random>
#include <ctime>


unsigned generate() {
	static std::default_random_engine e;
	static std::uniform_int_distribution<unsigned> u;
	return u(e);
}

unsigned generate(unsigned seed) {
	static std::default_random_engine e(seed);
	static std::uniform_int_distribution<unsigned> u;
	return u(e);
}

unsigned generate(unsigned seed, unsigned min, unsigned max) {
	static std::default_random_engine e(seed);
	static std::uniform_int_distribution<unsigned> u(min,max);
	return u(e);
}

int main() {

	/*std::cout << generate() << std::endl;
	std::cout << generate() << std::endl;
	std::cout << generate(20) << std::endl;
	std::cout << generate(20) << std::endl;*/
	for (int i = 0; i < 10; ++i) {
		std::cout << generate(std::time(0)) << std::endl;
	}

	return 0;
}