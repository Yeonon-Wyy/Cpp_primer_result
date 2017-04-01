#include "Sales_data.h"


int main(){
	Sales_data s1;   //dafalue
	Sales_data s2("2015010622");	//scond
	Sales_data s3("2015010622",10,10); //third
	Sales_data s4(std::cin);	
	return 0;
}
