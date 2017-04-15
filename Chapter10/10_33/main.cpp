#include <iostream>
#include <iterator>
#include <algorithm>
#include <fstream>

using namespace std;

int main(int argc,char *argv[]){
	/*file*/
	ifstream input(argv[1]);
	ofstream out_put_1(argv[2]),out_put_2(argv[3]);
	/*stream iterator*/
	istream_iterator<int> in(input),eof;
	ostream_iterator<int> out_1(out_put_1," "),out_2(out_put_2,"\n");
	
	for_each(in,eof,[&out_1,&out_2](const int n) { *(n % 2 == 0 ? out_2 : out_1)++ = n; });	

	input.close();	

	return 0;
}
