#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main(){
	vector<unsigned> scores(11,0);
	unsigned grade;
	while (cin >> grade)
		if (grade <= 100) ++(*(scores.begin() + grade/10));
	for (auto n : scores)
		cout << n << " ";
	cout << endl;

	return 0;
}
