#include <iostream>
#include <vector>

using namespace std;


int main(){
	vector<int> vi;
	for (int i = 0; i < 10;i++){
		vi.push_back(i);
	}	
	for (int num : vi)
		cout << num << " ";
	cout << endl;
	return 0;
}
