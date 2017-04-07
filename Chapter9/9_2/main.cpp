#include <iostream>
#include <deque>
#include <list>

using namespace std;

int main(){
	list<deque<int>> ldi;
	for (int i = 0;i < 5 ;i++){
		deque<int> di = {1,2,3,4,5};
		ldi.push_back(di);
	}

	for (auto &di : ldi){
		for (auto &n : di){
			cout << n << " ";
		}
		cout << "\n";
	}

	
	return 0;
}
