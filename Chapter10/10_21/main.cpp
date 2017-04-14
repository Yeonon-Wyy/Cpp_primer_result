#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int val = 7;

	auto i = [&val]() { 
		if (val){
			--val;
			return false;
			
		}
		else
			return true;

	};
	
	while (!i()) cout << val << endl; 

	return 0;
}
