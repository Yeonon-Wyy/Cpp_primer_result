#include <iostream>

using namespace std;

int main(){
	int grade = 0;
	cin >> grade;
	if (grade < 0 || grade > 100)
		cout << "Error grade" << endl;
	else if (grade < 60)
		cout << "D (didn't pass)" << endl;
	else if (grade < 80)
		cout << "C " << endl;
	else if (grade < 90)
		cout << "B " << endl;
	else
		cout << "A" << endl;
	return 0;
}
