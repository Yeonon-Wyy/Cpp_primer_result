#include "Find.h"
#include <vector>
#include <iostream>
#include <list>

int main() {
	std::vector<int> vi = {1,2,3,4,5,6,7,8,9,0};
	auto iter_vi = find(vi.begin(),vi.end(),7);

	std::cout << "vector : " << ((iter_vi == vi.end()) ? "Can't found" : "Found it") << std::endl;

	std::list<int> li = {1,2,3,4,5,6,7,8,9,0};
	auto iter_li = find(li.begin(),li.end(),10);
	std::cout << "List : " << ((iter_li == li.end()) ? "Can't found" : "Found it") << std::endl;

	return 0;
}