#ifndef QUOTE_H
#define QUOTE_H
#include <string>
#include <iostream>

class Quote
{
	//friend double print_total(std::ostream &os,const Quote &item,std::size_t n);
public:
	Quote() = default;
	Quote(const std::string &,double);
			

	Quote(const Quote &);
	Quote(Quote &&) noexcept ;
	Quote& operator=(const Quote &);
	Quote& operator=(Quote &&) noexcept;

	std::string isbn() const { return bookNo; }
	virtual double net_price(std::size_t n) const {
		return n * price;
	}
	virtual void debug() const {
		std::cout << "data member : " << std::endl
				  << "bookNo is " << bookNo
				  << "price is " << price << std::endl; 
	}

	virtual Quote* clone() const & { return new Quote(*this); }
	virtual Quote* clone() && { return new Quote(std::move(*this)); }

	virtual ~Quote();
	
private:
	std::string bookNo;
protected:
	double price = 0.0;
};

class Bulk_quote : public Quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string &,double ,std::size_t, double);
	Bulk_quote(const Bulk_quote &);
	Bulk_quote(Bulk_quote &&) noexcept;
	Bulk_quote& operator=(const Bulk_quote &);
	Bulk_quote& operator=(Bulk_quote &&) noexcept;

	virtual ~Bulk_quote();
	virtual double net_price(std::size_t n) const override {
		return n > 10 ? n * price * discount : n * price;
	}
	virtual Bulk_quote* clone() const & override { return new Bulk_quote(*this); }
	virtual Bulk_quote* clone() && override { return new Bulk_quote(std::move(*this)); }
private:
	std::size_t quantity = 0.0;
	double discount = 1.0;
};

double print_total(std::ostream &os,const Quote &item,std::size_t n) {
		double ret = item.net_price(n);
		os << "ISBN : " << item.isbn()
		   << " # sold: " << n << " total due : " << ret << std::endl;
		return ret;
}

#endif