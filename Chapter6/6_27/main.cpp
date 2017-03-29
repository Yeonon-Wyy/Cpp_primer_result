#include <iostream>
#include <initializer_list>

using namespace std;

int Sum(initializer_list<int> il){
	int sum = 0;
	for (int num : il)
		sum += num;
	return sum;
}

int main(){
	cout << Sum({1,2,3,4,5}) << endl;
	return 0;
}
