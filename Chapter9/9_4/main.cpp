#include <iostream>
#include <vector>
#include <iterator>


using namespace std;  		//for convinue

bool hasNum(vector<int>::iterator &&beg,vector<int>::iterator &&end, int n){
	while (beg != end){
		if (*beg == n)
			return true;
		++beg;
	}
	return false;
}

int main(){
	vector<int> vi = {1,2,3,4,5,6,7,8,9,10};
	if (hasNum(vi.begin(),vi.end(),8)){
		cout << "Found it!" << endl;
	}
	else
		cout << "Can't find it!" << endl;

	return 0;
}
