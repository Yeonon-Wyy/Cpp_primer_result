#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
	istream_iterator<int> in(cin),eof;
	ostream_iterator<int> out(cout," ");
	vector<int> vi(in,eof);
	sort(vi.begin(),vi.end());
	unique_copy(vi.begin(),vi.end(),out);
	cout << endl;
	return 0;
}
