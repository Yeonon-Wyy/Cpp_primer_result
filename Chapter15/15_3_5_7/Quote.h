#ifndef QUOTE_H
#define QUOTE_H
#include <string>
#include <iostream>



class Quote
{
	//friend double print_total(std::ostream &os,const Quote &item,std::size_t n);
public:
	Quote() = default;
	Quote(const std::string &book,double sales_price) :
			bookNo(book),price(sales_price) { }

	std::string isbn() const { return bookNo; }
	virtual double net_price(std::size_t n) const {
		return n * price;
	}
	virtual ~Quote() = default;
	
private:
	std::string bookNo;
protected:
	double price = 0.0;
};

class Bulk_quote : public Quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string &book,double sales_price,std::size_t qty,double disc) :
			Quote(book,sales_price),min_qty(qty),discount(disc) { }
	double net_price(std::size_t cnt)  const override {
		if (cnt >= min_qty)
			return cnt *  discount * price;
		else 
			return cnt * price;
	}

private:
	std::size_t min_qty;
	double discount;
};



class Ploy_quote : public Quote {
public:
	Ploy_quote() = default;
	Ploy_quote(const std::string &book,std::size_t sales_price,
				std::size_t max_cnt,double disc):
				Quote(book,sales_price),max_mount(max_cnt),discount(disc) { }
	double net_price(std::size_t cnt) const {
		if (cnt <= max_mount)
			return cnt * discount * price;
		else
			return price * (cnt - max_mount) +  price * discount * max_mount;
	}

private:
	std::size_t max_mount;
	double discount;
	
};

double print_total(std::ostream &os,const Quote &item,std::size_t n) {
		double ret = item.net_price(n);
		os << "ISBN : " << item.isbn()
		   << " # sold: " << n << " total due : " << ret << std::endl;
		return ret;
}


#endif