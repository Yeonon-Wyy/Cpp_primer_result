#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> vi_1(10,42);
	vector<int> vi_2{42,42,42,42,42,42,42,42,42,42};
	vector<int> vi_3;
	for (int i = 0;i < 10;i++)
		vi_3.push_back(42);
	cout << "The first is best!" << endl;
	return 0;
}
