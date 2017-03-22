#include <iostream>
#include <vector>
#include <iterator>

using namespace std;      //for convenience

int main(){

	vector<int> vi = {1,2,3,4,5};
	int a[5];
	for (int *i = begin(a);i != end(a); i++){    // std::begin()  and std::end() will return a ptr to point array value 
		*i = vi[i - begin(a)];
	}
	for (int num : a)
		cout << num << " ";
	cout << endl;

	return 0;
}
