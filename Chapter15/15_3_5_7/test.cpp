#include "Quote.h"

int main() {
	Quote q("2015010622",10);
	Bulk_quote bq("2015010623",10,10,0.8);

	Ploy_quote pq("201510624",10,10,0.8);
	print_total(std::cout,q,15);
	print_total(std::cout,bq,15);
	print_total(std::cout,pq,15);
	return 0;
}