#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<string> s_number = {"1","2","3","4","5"};
	int sum = 0;
	for (auto &s:s_number){
		sum += stoi(s);
	}
	cout << "sum is : " << sum << endl;
	return 0;
}
