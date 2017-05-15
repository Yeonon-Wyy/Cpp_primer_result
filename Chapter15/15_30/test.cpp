#include "Quote.h"
#include <vector>
#include <memory>

int main() {
	/*test Quote*/
	/*Quote q1("C++ primer",10);
	std::cout << q1.net_price(5) << std::endl;
	Quote q2(q1);
	std::cout << q2.net_price(5) << std::endl;
	Quote q3;
	q3 = q1;
	std::cout << q3.net_price(5) << std::endl;*/


	/*test Bulk_quote*/
	/*Bulk_quote bq1("C++ primer 5th",10,10,0.8);
	std::cout << bq1.net_price(15) << std::endl;
	Bulk_quote bq2(bq1);
	std::cout << bq2.net_price(15) << std::endl;
	Bulk_quote bq3;
	bq3 = bq1;
	std::cout << bq3.net_price(15) << std::endl;*/

	/*Note: move constuctor and move assignment no test.(Mainly,I don't kown how to use it)*/
	
	/*excise 15.28 and 15.29*/

	std::vector<std::shared_ptr<Quote>> qv;
	/*Bulk_quote is a temp object here.So cause move */
	//qv.push_back(Bulk_quote("c++ primer 5th",20,10,0.8));
	qv.push_back(std::make_shared<Bulk_quote>("c++ primer",20,10,0.8));
	std::cout << qv.back()->net_price(20) << std::endl;
	return 0;
}