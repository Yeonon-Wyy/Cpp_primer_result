#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){
	ifstream input("test.txt");
	if (!input){
		cerr << "No data?!" << endl;
		return -1;
	}

	vector<string> vs;
	string line;
	while (getline(input,line)) vs.push_back(line);

	for (auto &s:vs){
		istringstream is(s);
		string word;
		while (is >> word) cout << word << " ";
		cout << endl;
	}

	return 0;
}
