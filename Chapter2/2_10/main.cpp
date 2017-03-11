#include <iostream>

using namespace std;

string global_str;
int global_int;

int main(){
	int local_int;
	string local_str;
	cout << "global_str " << global_str << endl;
	cout << "global_int " << global_int << endl;
	cout << "local_int "  << local_int  << endl;
	cout << "local_str  " << local_str << endl;	
	return 0;
}
