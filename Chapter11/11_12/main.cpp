#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;


int main(){
	string str = "";
	int n = 0;
	vector<pair<string,int>> vp;

	while (cin >> str >> n){
		vp.push_back({str,n});
		/*can use this way as well*/
		//vp.push_back(pair<string,int>(str,n));
		/*or this way*/
		//vp.push_back(make_pair(str,n));
	}

	for (auto &pa : vp){
		cout << pa.first << " " <<  pa.second << " ";
	}
	cout << endl;
	return 0;
}
