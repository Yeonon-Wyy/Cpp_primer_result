#include <iostream>

#include <vector>

using namespace std;

int main(){
	vector<int> vi = {1,2,3,4,5,6};
	for (int &num : vi){
		num = (num & 1) != 0 ? num *= 2 : num; 
	}
	for (int &num : vi)
		cout << num << " ";
	cout << endl;
	return 0;
}
