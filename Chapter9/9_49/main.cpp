#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
	string s = "My name is YanyuWei,I'm from China";
	string longest_word = "";
	stringstream ss(s);
	string word;
	unsigned count = 0;
	while (ss >> word){
		count++;
		if (word.find_first_not_of("aceimnorsuvwxzACEIMNORSUVWXZ") == string::npos && word.size() > longest_word.size())
			longest_word = word;
	}
	cout << count << endl;
	cout << longest_word << endl;

	return 0;
}
