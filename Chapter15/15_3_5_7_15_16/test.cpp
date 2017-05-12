#include "Quote.h"

int main() {
	Quote q("2015010622",10);
	Bulk_quote bq("2015010623",10,10,0.8);

	Limit_quote pq("201510624",10,10,0.8);
	print_total(std::cout,q,15);
	print_total(std::cout,bq,15);
	print_total(std::cout,pq,15);

	std::cout << "list of data member " << std::endl;
	q.debug();
	bq.debug();
	pq.debug();

	/*error: return type 'Disc_quote' is an abstract class (clang++)*/
	/*error: cannot declare variable ‘dq2’(or dq1) to be of abstract type ‘Disc_quote’ (g++)*/
	//Disc_quote dq1;
	//Disc_quote dq2("2015010625",10,10,0.8);
	
	/*although abstract class can't create object ,but can create pointer*/
	Disc_quote *dq3 = nullptr;
	return 0;
}