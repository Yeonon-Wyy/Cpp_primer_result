#include <iostream>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

void addMember(map<string,vector<string>> &familly){
	cout << "Enter last name : ";
	string last_name = "";
	
	while (cin >> last_name && last_name != "@q"){
		cout << "Enter some first name : ";
		string first_name = "";
		while (cin >> first_name && first_name != "@q"){
			familly[last_name].push_back(first_name);
		}
		cout << "Enter last name : ";
		
	}
}

int main(){
	ostream_iterator<string> out(cout," ");
	map<string,vector<string>> familly;
	addMember(familly);
	for (auto last_name : familly){
		cout << last_name.first << " has " << last_name.second.size() << " Member : " << endl;
		for (auto first_name : last_name.second)
			cout << first_name << " ";
	cout << endl;
	}
	return 0;
}
