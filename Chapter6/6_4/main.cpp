#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int x){
	int ret = 1;
	while (x > 1){
		ret *= x--;
	}
	return ret;
}

int main(){
	cout << "Enter number (0-13)" << endl;
	int x;
	cin >> x;
	cout << "result = " << fact(x) << endl;

}
