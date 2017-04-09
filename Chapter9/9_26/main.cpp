#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main(){
	int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
	vector<int> vi(begin(ia),end(ia));
	list<int> li(vi.begin(),vi.end());
	auto it_vec = vi.begin();
	while (it_vec != vi.end()){
		if (*it_vec % 2 == 0)
			it_vec = vi.erase(it_vec);
		else
			++it_vec;
	}
	auto it_list = li.begin();
	while (it_list != li.end()){
		if (*it_list % 2)
			it_list = li.erase(it_list);
		else
			++it_list;
	}

	for (auto &n : vi)
		cout << n << " ";
	cout << endl;
	
	for (auto &n : li)
		cout << n << " ";
	cout << endl;

	return 0;
}
