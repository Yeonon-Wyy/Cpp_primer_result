#include "Quote.h"
#include <iostream>

/*class Quote member*/

Quote::Quote(const Quote &) {
	std::cout << "Quote : copy constructor" << std::endl;
}

Quote::Quote(Quote &&) {
	std::cout << "Quote : move constructor " << std::endl;
}

Quote& Quote::operator=(const Quote &) {
	std::cout << "Quote : copy assignment" << std::endl;
}

Quote& Quote::operator=(Quote &&) {
	std::cout << "Quote : move assignment" << std::endl;
}

Quote ~Quote() {
	std::cout << "Quote : ~Quote()" << std::endl;
}
