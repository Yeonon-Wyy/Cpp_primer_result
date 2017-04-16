#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

void count_word(map<string, int> &dict) {
	string word = "";
	while (cin >> word) {
		for (auto &c : word) c = tolower(c);

		word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
		++dict[word];
	}
}

int main() {
	map<string, int> dict;
	count_word(dict);

	for (auto &s : dict)
		cout << s.first << " occurs "
		<< s.second << (s.second > 1 ? "times" : "time") << endl;
	return 0;
}

