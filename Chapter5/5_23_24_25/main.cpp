#include <iostream>
#include <stdexcept>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	try{
		cout << "res : " << a / b << endl;
	}catch (range_error e){
		cout << e.what() << endl;
	}
	return 0;
}
