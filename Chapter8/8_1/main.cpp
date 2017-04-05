#include <iostream>
#include <string>

using namespace std;		//for convinue

istream &read(istream &is){
	string temp;
	while (is >> temp)
		cout << temp << endl;
	is.clear();
	return is;
}

int main(){

	istream &is = read(cin);
	cout << is.rdstate() << endl;
	
}
