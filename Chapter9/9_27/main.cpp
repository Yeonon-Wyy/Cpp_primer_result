#include <iostream>
#include <forward_list>

using namespace std;

int main(){
	forward_list<int> fli = {1,2,3,4,5};
	auto pre = fli.before_begin(),cur = fli.begin();
	while (cur != fli.end()){
		if (*cur % 2)
			cur = fli.erase_after(pre);
		else
			pre = cur++;
	}

	for (auto &n : fli)
		cout << n << " ";
	cout << endl;
	return 0;
}
