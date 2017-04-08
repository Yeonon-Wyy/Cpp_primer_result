#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> vi_1 = {1,2,3,4,5};
	vector<int> vi_2 = {1,2,3,4,5};
	if (vi_1 == vi_2)
		cout << "They are equal ! " << endl;
	else
		cout << "They are not equal !" << endl;
	return 0;
}
