#include "Quote.h"

/*class Quote member*/
Quote::Quote(const std::string &book,double sales_price) :
			bookNo(book),price(sales_price) {
				std::cout << "define constructor" << std::endl;	
}
Quote::Quote(const Quote &rhs) :
	bookNo(rhs.bookNo),price(rhs.price) {
		std::cout << "copy constructor" << std::endl;
}

Quote::Quote(Quote &&rhs) noexcept :
	bookNo(std::move(rhs.bookNo)),price(std::move(rhs.price)) {
		std::cout << "move constructor" << std::endl;
}

Quote& Quote::operator=(const Quote &rhs) {
	bookNo = rhs.bookNo;
	price = rhs.price;
	std::cout << "copy assignment " << std::endl;
	return *this;
}

Quote& Quote::operator=(Quote &&rhs) noexcept {
	bookNo = std::move(rhs.bookNo);
	price = std::move(rhs.price);
	std::cout << "move assignment" << std::endl;
	return *this;
}

Quote::~Quote() {
	std::cout << "~Quoet() " << std::endl;
}

/*class Bulk_quote member*/

Bulk_quote::Bulk_quote(const std::string &book,double sales_price,
						std::size_t qty,double disc):
						Quote(book,sales_price),quantity(qty),discount(disc) {
							std::cout << "Bulk_quote constructor" << std::endl;
						}

Bulk_quote::Bulk_quote(const Bulk_quote &rhs) : 
						Quote(rhs),quantity(rhs.quantity),discount(rhs.discount) {
							std::cout << "Bulk_quote copy constructor" << std::endl;
						}

Bulk_quote::Bulk_quote(Bulk_quote &&rhs) noexcept :
						Quote(rhs),quantity(std::move(rhs.quantity)),discount(std::move(rhs.discount)) {
							std::cout << "Bulk_quote move constructor" << std::endl;
						}

Bulk_quote& Bulk_quote::operator=(const Bulk_quote &rhs) {
	Quote::operator=(rhs);
	quantity = rhs.quantity;
	discount = rhs.discount;
	std::cout << "Bulk_quote copy assignment " << std::endl;
	return *this;
}

Bulk_quote& Bulk_quote::operator=(Bulk_quote &&rhs) noexcept {
	Quote::operator=(rhs);
	quantity = std::move(rhs.quantity);
	discount = std::move(rhs.discount);
	std::cout << "Bulk_quote move assignment " << std::endl;
	return *this;
}

Bulk_quote::~Bulk_quote() {
	std::cout << "~Bulk_quote()" << std::endl;
}


