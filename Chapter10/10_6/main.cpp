#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> vi(10);
	fill_n(vi.begin(),10,0);

	for (auto &n : vi)
		cout << n << " ";
	cout << endl;
	return 0;
}
