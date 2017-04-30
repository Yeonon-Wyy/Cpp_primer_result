#include "Employee.h"

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
	Employee e1("weiyanyu");
	Employee e2("Yeonon");
	Employee e3(e1);
	Employee e4 = e1;

	cout << e1.id() << endl;
	cout << e2.id() << endl;
	cout << e3.id() << endl;
	cout << e4.id() << endl;
	return 0;
}