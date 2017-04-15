#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s,string::size_type sz){
	return s.size() < sz;
}

int main(){
	vector<int> vi = {1,2,3,4,5,6,7,8,9};
	string str = "Yeonon";
	cout << *find_if(vi.begin(),vi.end(),bind(check_size,str,_1)) << endl;
	return 0;
}
