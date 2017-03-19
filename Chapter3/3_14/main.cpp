#include <iostream>

#include <vector>
using namespace std;

int main(){
	vector<int> res(0);
	int a;
	while (cin >> a)
		res.push_back(a);
	for (int &num : res)
		cout << num << " ";
	cout << endl;
	return 0;
}
