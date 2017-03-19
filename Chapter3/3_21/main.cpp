#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;


void check(const vector<int> &vi){
	if (vi.empty()) cout << "Size 0;no value" << endl;
	cout << "Size :" << vi.size() << endl << "Value: ";
	for (auto it = vi.begin();it != vi.end();it++){
		cout << *it << " ";
	}
	cout << endl;
}

void check(const vector<string> &vs){
	if (vs.empty()) cout << "Size 0;no value" << endl;
	cout << "Size :" << vs.size() << endl << "Value:" << endl;
	for (auto it = vs.begin();it != vs.end();it++){
		if (it->empty())
			cout << "(Null)" << ",";
		else
			cout << *it << ",";
	}
	cout << endl;

}
int main(){
	
	vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

	check(v1);
	check(v2);
	check(v3);
	check(v4);
	check(v5);
	check(v6);
	check(v7);
	return 0;
}
