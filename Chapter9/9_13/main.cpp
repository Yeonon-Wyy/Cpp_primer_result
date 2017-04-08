#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(){
	list<int> li{1,2,3,4,5};
	vector<double> vd(li.begin(),li.end());
	
	vector<int> vi = {1,2,3,4,5};
	vector<double> vd2(vi.begin(),vi.end());
	return 0;
}
