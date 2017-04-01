#include <iostream>

#include "Sales_data.h"

using namespace std;

int main(){
	Sales_data total;
	if (cin >> total.bookNo >> total.unit_sole >> total.revenue){
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.unit_sole >> trans.revenue){
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else{
				cout << total.bookNo << " " <<  total.unit_sole << " " << total.revenue << endl;
			   	total = trans;
			}
		}
		cout << total.bookNo << " " <<  total.unit_sole << " " << total.revenue << endl;
		
	}else{
		cerr << "No data?!" << endl;
	}
	return 0;
}
