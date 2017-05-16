#include <iostream>
#include "constexpr.h"

int main() {
	/*test_1*/
	std::cout << arrLen("yeonon") << std::endl;

	/*test_2*/
	/*this test has soem error what if I define const T * template 
	,I don't kown how to do.*/
	/*const char *arr_1 = "yeonon";
	std::cout << arrLen(arr_1) << std::endl;*/

	/*test_3*/
	/*this case ,the template will return 10(define),whatever the array has what values.*/
	const int a[10] = {1,2,3};
	std::cout << arrLen(a) << std::endl;
	return 0;
}