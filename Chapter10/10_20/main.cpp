#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;



int main(){
	vector<string> vs = {"wei","yan","yu","Yeonon"};
	auto Count = count_if(vs.begin(),vs.end(),[](string &s) { return s.size() >= 6; });
	cout << Count << endl;
	return 0; 
}

