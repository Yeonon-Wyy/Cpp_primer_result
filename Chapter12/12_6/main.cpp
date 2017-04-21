#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

vector<int>* dynamic_memory(){
	vector<int> *ptr_vec = new vector<int>();
	return ptr_vec;	

}

void write_dynamic_memory(vector<int> *ptr_vec){
	int a = 0;
	while (cin >> a)
		ptr_vec->push_back(a);
}

void read_dynamic_memory(vector<int> *ptr_vec){
	for (auto &a : *ptr_vec)
		cout << a << " ";	
}

int main(){
	vector<int> *ptr_vec = dynamic_memory();
	write_dynamic_memory(ptr_vec);
	read_dynamic_memory(ptr_vec);
	cout << endl;

	//for avoid memory leak ,we must remeber delete pointer after use new 
	delete ptr_vec;

	return 0;
}
