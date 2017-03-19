#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

int main(){

	vector<string> text;
	string line;
	while (getline(cin,line)) text.push_back(line);

	cout << "Please enter what you want to search: ";
	string sought;
	cin >> sought;

	auto beg = text.begin(),end = text.end();
	auto mid = beg + (end - beg)/2;
	while (beg < end){
		if (sought < *mid)
			end = mid;
		else if (sought > *mid)
			beg = mid+1;
		else {
			cout << "We found it!";
			return 0;
		}
		mid = beg + (end - beg) / 2;

	}
	cout << "Can not found !" << endl;
	
	
	return 0;
}
