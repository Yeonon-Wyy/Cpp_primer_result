#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(){
	vector<int> vi{1,2,3,4,5,6,7,8,9,10};
	for (vector<int>::iterator it = vi.begin();it != vi.end();it++){
		*it *= 2;
	}

	for (int n : vi)
		cout << n << " ";
	cout << endl;
	return 0;
}
