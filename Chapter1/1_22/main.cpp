#include <iostream>

#include "Sales_item.h"

using namespace std;

int main(){
	Sales_item item,item_sum;
	while (cin >> item){
		item_sum = item_sum +  item;
	
	}

	cout << "res: " << endl;
	cout << item.isbn() << item_sum << endl;
	return 0;
}
