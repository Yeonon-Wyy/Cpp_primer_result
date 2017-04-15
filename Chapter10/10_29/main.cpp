#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
	ifstream in("test.txt");
	istream_iterator<string> input(in),eof;
	ostream_iterator<string> ouput(cout," ");
	vector<string> vi(input,eof);
	cout << vi.size() << endl;	
	copy(vi.begin(),vi.end(),ouput);
	cout << endl;
	return 0;
}
