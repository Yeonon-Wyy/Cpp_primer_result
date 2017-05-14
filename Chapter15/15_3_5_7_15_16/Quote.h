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
	virtual void debug() const {
		std::cout << "data member : " << std::endl
				  << "bookNo is " << bookNo
				  << "price is " << price << std::endl; 
	}
	virtual ~Quote() = default;
	
private:
	std::string bookNo;
protected:
	double price = 0.0;
};

class Disc_quote : public Quote {
public:
	Disc_quote() = default;
	Disc_quote(const std::string &book,double price,
				std::size_t qty,double disc) :
				Quote(book,price),quantity(qty),discount(disc) { }

	double net_price(std::size_t) const = 0;
protected:
	std::size_t quantity = 0;
	double discount = 0.0;
};


class Bulk_quote : public Disc_quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string &book,double sales_price,
				std::size_t qty,double disc) :
			 	Disc_quote(book,sales_price,qty,disc){ }
	double net_price(std::size_t cnt)  const override {
		if (cnt >= quantity)
			return cnt *  discount * price;
		else 
			return cnt * price;
	}
	/*bookNo is privete in base class,so can't use it in inheri class although */
	void debug() const override {
		Quote::debug();
		std::cout << "min qty is " << quantity
				  << "discount is " << discount << std::endl;
	}

};



class Limit_quote : public Disc_quote {
public:
	Limit_quote() = default;
	Limit_quote(const std::string &book,std::size_t sales_price,
				std::size_t max_cnt,double disc):
				 Disc_quote(book,sales_price,max_cnt,disc){ }
	double net_price(std::size_t cnt) const override {
		if (cnt <= quantity)
			return cnt * discount * price;
		else
			return price * (cnt - quantity) +  price * discount * quantity;
	}
	void debug() const override {
		Quote::debug();
		std::cout << "max mount is " << quantity
				  << "discount is " << discount << std::endl;
	}

	
};

double print_total(std::ostream &os,const Quote &item,std::size_t n) {
		double ret = item.net_price(n);
		os << "ISBN : " << item.isbn()
		   << " # sold: " << n << " total due : " << ret << std::endl;
		return ret;
}


#endif