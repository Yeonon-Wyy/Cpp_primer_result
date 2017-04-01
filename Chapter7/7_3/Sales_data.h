#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>



struct Sales_data{
	std::string bookNo;
	unsigned unit_sole = 0;
	double revenue = 0.0;

	Sales_data& combine(const Sales_data &rhs);
	std::string& isbn(){return bookNo;}

	
};

Sales_data& Sales_data::combine(const Sales_data &rhs){
	unit_sole += rhs.unit_sole;
	revenue += rhs.revenue;
	return *this;

}

#endif
