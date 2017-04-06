#include "Sales_data.h"
#include <fstream>

using namespace std;

int main(int argc,char *argv[]){
	ifstream input(argv[1]);
	if (!input){
		cout << "Can't open the file!" << endl;
		return -1;
	}
	Sales_data total;
	if (read(input,total)){
		Sales_data trans;
		while (read(input,trans)){
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else{
				print(cout,total) << endl;
				total = trans;
			}
		}
		print(cout,total) << endl;	
	}else
		cerr << "No data ?!" << endl;
	
	input.close();	

	return 0;
}
