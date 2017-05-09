#include <iostream>

struct Fuck{
	int operator()(int a,int b,int c) const {
		if (a > 0)
			return b;
		else
			return c;
	}
};

int main() {
	Fuck fuck;
	std::cout << fuck(1,2,3) << std::endl;
	std::cout << fuck(-1,2,3) << std::endl;
	return 0;
}