#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> dynamic_memory(){
	auto sptr_vec = make_shared<vector<int>>();
	return sptr_vec;
}

void write_dynamic_memory(shared_ptr<vector<int>> sptr_vec){
	int a = 0;
	while (cin >> a){
		sptr_vec->push_back(a);
	}
}

void read_dynamic_memory(shared_ptr<vector<int>> sptr_vec){
	for (auto &a : *sptr_vec)
		cout << a << " ";
}
int main(){
	auto sptr_vec = dynamic_memory();
	write_dynamic_memory(sptr_vec);
	read_dynamic_memory(sptr_vec);

	//shared_ptr don't need delete 
	return 0;
}
