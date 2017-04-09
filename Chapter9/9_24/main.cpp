#include <iostream>
#include <vector>


using namespace std;

int main(){
	vector<int> vi;						//Segmentation fault: 11
	cout << *vi.begin() << endl;
	cout << vi.front() << endl;
	cout << vi.at(0) << endl;
	cout << vi[0] << endl;
	return 0;
}
