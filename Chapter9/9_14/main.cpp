#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(){
	list<const char *> lc{"wei","yan","yu"};
	vector<string> vs;
	vs.assign(lc.begin(),lc.end());

	for (auto &s:vs){
		cout << s << " ";
	}
	cout << endl;

	return 0;
}
