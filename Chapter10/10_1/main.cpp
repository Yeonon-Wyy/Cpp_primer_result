#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> vi;
	int val = 0;
	while (cin >> val)
		vi.push_back(val);
	int toFindVal = 10;
	cout << count(vi.begin(),vi.end(),toFindVal) << endl;
	
	return 0;
}
