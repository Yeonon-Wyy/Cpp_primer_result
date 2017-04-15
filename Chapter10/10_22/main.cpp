#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool checkN(const string &word,string::size_type sz){
	return word.size() >= sz;
}

int main(){
	vector<string> words = {"wei","yan","yu","Yeonon"};
	cout << count_if(words.begin(),words.end(),bind(checkN,_1,6)) << endl;
	return 0;
}
