#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void ReadFile(vector<string> &res,string &fileName){
	ifstream input(fileName);
	if (input){
		cout << "Yes1" << endl;
		string temp;
		while (input >> temp)
			res.push_back(temp);
	}
}


int main(){
	vector<string> vs;
	string fileName = "test.txt";
	ReadFile(vs,fileName);

	for (string &line:vs)
		cout << line << " " << endl;
	return 0;
}
