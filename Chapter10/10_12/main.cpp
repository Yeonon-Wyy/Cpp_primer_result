#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isMorethan5(const string &s){
	return s.size() >= 5;
}

int main(){
	vector<string> words = {"fox","red","over","quick","slow","turtle","yeonon"};
	auto end = partition(words.begin(),words.end(),isMorethan5);
	
	for (auto beg = words.begin();beg != end ;++beg){
		cout << *beg << " ";
	}

	cout << endl;
	return 0;
}
