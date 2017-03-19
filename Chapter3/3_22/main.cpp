#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main(){
	vector<string> text;
	string line;
	while (getline(cin, line))
		text.push_back(line);
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
		if (it == text.begin()){
			for (auto &c : *it) c = toupper(c);
		}
        cout << *it << endl;
    }
	
	return 0;
}
