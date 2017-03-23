#include <iostream>

using namespace std;

int main(){
	unsigned grade;
	cout << "Enter your grade "<< endl;
	cin >> grade;
	string res = "";
	res = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : (grade < 75) ? "low pass" : "pass";
	cout << res << endl;


	if (grade > 90)
		cout << "high pass" << endl;
	else if (grade < 60)
		cout << "fail" << endl;
	else if (grade < 75)
		cout << "low pass" << endl;
	else
		cout << "pass" << endl;
	return 0;
}
