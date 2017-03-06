#include<iostream>

using namespace std;

int main(){
	int i = 50;
	int res = 0;
	while (i <= 100){
		res += i;
		i++;
	}
	cout << "result = " << res << endl;
	return 0;
}
