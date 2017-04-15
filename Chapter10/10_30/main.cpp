#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
	int n = 0;
	istream_iterator<int> in(cin),eof;
	ostream_iterator<int> out(cout," ");
	vector<int> vi(in,eof);
	sort(vi.begin(),vi.end());
	copy(vi.begin(),vi.end(),out);
	cout << endl;
	return 0;
}
