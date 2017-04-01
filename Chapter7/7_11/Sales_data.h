#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>


class Sales_data{
public:
	Sales_data() = default;
	Sales_data(const std::string &s) : bookNo(s) { }
	Sales_data(const std::string &s,unsigned n,double p):
				bookNo(s),unit_sole(n),revenue(p * n) { }
	Sales_data(std::istream &is);


	Sales_data& combine(const Sales_data &rhs);
	std::string const&  isbn() const {return bookNo;}

	std::string bookNo;
	unsigned unit_sole = 0;
	double revenue = 0.0;
	
	
};

Sales_data& Sales_data::combine(const Sales_data &rhs){
	unit_sole += rhs.unit_sole;
	revenue += rhs.revenue;
	return *this;
}

std::istream& read(std::istream &is,Sales_data &item){
	double price = 0;
	is >> item.bookNo >> item.unit_sole >> price;
	item.revenue = price * item.unit_sole;
	return is;
}

std::ostream& print(std::ostream &os,const Sales_data &item){
	os << item.isbn() << " " << item.unit_sole << " "
	   << item.revenue;
	return os;
}

Sales_data add(const Sales_data &lhs,const Sales_data &rhs){
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

Sales_data::Sales_data(std::istream &is){
	read(is,*this);
}



#endif
