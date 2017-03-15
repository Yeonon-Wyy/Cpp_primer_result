#include <iostream>

#include "Sales_data.h"

using namespace std;

int main(){
	Sales_data data1,data2;
	cin >> data1.bookNo >> data1.units_sole
		>> data2.bookNo >> data2.units_sole;
	if (data1.bookNo == data2.bookNo){
		int sum = data1.units_sole + data2.units_sole;
		cout << "units_sole sum is : " << sum << endl;
	}
	else{
		cout << "book id must same!" << endl;
	}
	return 0;
}
