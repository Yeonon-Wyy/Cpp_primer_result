#include <iostream>
#include <vector>
#include <iterator>

using namespace std;    //for convenience

int main(){
	int a[] = {1,2,3,4,5};
	vector<int> vi(begin(a),end(a));
	for (int num : vi)
		cout << num << " ";
	cout << endl;
	return 0;
}
