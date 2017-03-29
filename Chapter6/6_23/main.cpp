#include <iostream>

using namespace std;

void print(const int *x){
	if (x)
		cout << *x << endl;
}

void print(const char *c){
	if (c)
		while (*c)
			cout << *c++ << " ";
}

void print(const int *beg,const int *end){
	while (beg != end){
		cout << *beg << " ";
		beg++;
	}
}

void print(const int ia[],size_t len){
	for (size_t i = 0; i < len;i++)
		cout << ia[i] << " ";

	
}

void print(const int (&arr)[2]){
	for (auto i : arr) cout << i << endl;
}

int main(){
	int i = 0, j[2] = {0, 1};
    char ch[5] = "weiy";

    print(ch);
    print(begin(j), end(j));
    print(&i);
    print(j, end(j) - begin(j));
	return 0;
}
