#include <iostream>
#include <string>
#include <sstream>
#include <fstream>


class SizeEqual {
public:	
	SizeEqual(size_t l = 0, size_t h = __INT_MAX__) : lower(l),upper(h) { }
	bool operator()(const std::string &s) const {
		return s.size() >= lower && s.size() <= upper; 
	}
private:
	size_t lower;
	size_t upper;
};

int main(int argc, char const *argv[])
{
	std::ifstream input(argv[0]);
	
	size_t count1To9 = 0,countMore10 = 0;

	SizeEqual test1(1,9);
	SizeEqual test2(10);

	for (std::string word; input >> word;) {
		if (test1(word)) ++count1To9;
		else if (test2(word)) ++countMore10;
	}
	std::cout << "1 to 9 has " << count1To9 << " words" << std::endl;
	std::cout << "more than 10 has " << countMore10 << " words" << std::endl;
	return 0;
}