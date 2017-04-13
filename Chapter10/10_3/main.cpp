#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
	vector<double> vi = {1.0,2.1,3,4,5,6,7,8,9,10};
	cout << static_cast<double>(accumulate(vi.cbegin(),vi.cend(),0)) << endl;
	return 0;
}
