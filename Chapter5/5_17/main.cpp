#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> vi_1 = {0,1,1,3};
	vector<int> vi_2 = {0,1,1,2,3,5,8};

	bool is_prefix = true;
	for (auto vi_1_it = vi_1.begin(),vi_2_it = vi_2.begin();
			vi_1_it != vi_1.end() && vi_2_it != vi_2.end();vi_1_it++,vi_2_it++){
		if (*vi_1_it != *vi_2_it){
			is_prefix = false;
			break;
		}
	}
	if (is_prefix) cout << "True" << endl;
	else cout << "False" << endl;
	return 0;
}
