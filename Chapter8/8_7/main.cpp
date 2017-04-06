#include "Sales_data.h"
#include <fstream>

using namespace std;

int main(int argc,char *argv[]){
	ifstream input(argv[1]);
	ofstream output(argv[2],ofstream::out | ofstream::app);
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
				print(output,total) << endl;
				total = trans;
			}
		}
		print(output,total) << endl;	
	}else
		cerr << "No data ?!" << endl;
	
	input.close();
	output.close();	

	return 0;
}
