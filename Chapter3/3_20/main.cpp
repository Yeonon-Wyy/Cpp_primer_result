#include <iostream>
#include <vector>

using namespace std;

int main(){
	/*cout << "first way:" << endl;
	int a;
	vector<int> vi;
	while (cin >> a)
		vi.push_back(a);
	for (int i = 1;i < vi.size();i+=2)
		cout << "sum is : " << vi[i-1] + vi[i] << endl;*/

	cout << "second way:" << endl;
	int b;
	vector<int> vi_2;
	while (cin >> b)
		vi_2.push_back(b);
	for (int i = 0,j = vi_2.size()-1;i < j;i++,j--){
		cout << "sum is :" << vi_2[i] + vi_2[j] << endl;
	}

	return 0;
}
