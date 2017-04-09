#include <iostream>
#include <list>
#include <deque>
#include <string>

using namespace std;

int main(){
	list<int> li = {1,2,3,4,5};
	deque<int> di_1,di_2;
	
	for (auto &n : li){
		if (n % 2 == 0)
			di_1.push_back(n);
		else
			di_2.push_back(n);
	}

	for (auto &n : di_1){
		cout << n << " ";
	}
	cout << "\n";

	for (auto &n : di_2){
		cout << n << " ";
	}
	cout << endl;
	return 0;
}
