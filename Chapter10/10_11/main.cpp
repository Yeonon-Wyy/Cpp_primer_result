#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isShorter(const string &s1,const string &s2){
	return s1.size() < s2.size();
}

void elimDups(vector<string> &words){
	stable_sort(words.begin(),words.end(),isShorter);

	words.erase(unique(words.begin(),words.end()),words.end());
}

int main(){
	vector<string> words = {"wei","yan","yu","yan","wei","Yeonon"};
	elimDups(words);

	for (auto &s : words)
		cout << s << " ";
	cout << endl;

	return 0;
}
