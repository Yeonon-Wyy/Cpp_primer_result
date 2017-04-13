#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void elimDups(vector<string> &words){
	sort(words.begin(),words.end());

	words.erase(unique(words.begin(),words.end()),words.end());
}

int main(){
	vector<string> words = {"wei","yan","yu","yan","wei","Yeonon"};
	elimDups(words);

	for (auto &s : words)
		cout << s << endl;

	return 0;
}
