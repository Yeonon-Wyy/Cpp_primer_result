#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

map<string,string> buildMap(ifstream &map_file){
	map<string,string> trans_map;
	string key,value;
	while (map_file >> key && getline(map_file,value)){
		if (value.size() > 1)
			trans_map[key] = value.substr(1);
		else
			throw runtime_error("no rule for " + key);
	}
	return trans_map;
	
}

const string &transform(const string &s,const map<string,string> &map){
	auto it = map.find(s);
	if (it != map.end())
		return it->second;
	else
		return s;
}

void word_transform(ifstream &map_file,ifstream &input){
	auto trans_map = buildMap(map_file);
	string text;
	while (getline(input,text)){
		stringstream stream(text);
		string word;
		bool firstWord = true;
		while (stream >> word){
			if (firstWord)
				firstWord = false;
			else
				cout << " ";
			cout << transform(word,trans_map);
		}
		cout << endl;
	}
}

int main(int argc,char *argv[]){
	ifstream input(argv[1]),map_file(argv[2]);
	word_transform(map_file,input);	
	return 0;
}
