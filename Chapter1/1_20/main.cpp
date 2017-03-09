#include <iostream>

#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item book[10];
	cout << "Please Enter 10 book information:"<<endl;
	for (int i = 0;i < 10;i++){
		cin >> book[i];
	}
	cout << "Result:" << endl;
	cout << "ID		count		price"<<endl;
	for (int i = 0;i < 10;i++){
		cout << book[i] << endl;
	}
	return 0;
}
