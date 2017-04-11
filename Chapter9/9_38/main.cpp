#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> vi = {1,2,3,4,5};
	for (int i = 0;i < 5;i++){
		vi.push_back(0);
		cout << i+1 << " time has " << vi.capacity() << endl; 
		while (vi.size() != vi.capacity())
			vi.push_back(0);
	}
	return 0;
}
