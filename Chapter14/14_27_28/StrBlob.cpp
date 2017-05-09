#include "StrBlob.h"

/*define some method of class StrBlob*/
StrBlob::StrBlob():
	data(std::make_shared<std::vector<std::string>>())
{ }

StrBlob::StrBlob(std::initializer_list<std::string> li):
	data(std::make_shared<std::vector<std::string>>(li))
{ }



void StrBlob::check(size_type i,const std::string &msg) const {
	if (i >= data->size())
		throw std::out_of_range(msg);
}

void StrBlob::pop_back(){
	check(0,"pop_back on empty StrBlob");
	data->pop_back();
}

std::string &StrBlob::front(){
	check(0,"front on empty StrBlob");
	return data->front();
}

std::string &StrBlob::back(){
	check(0,"back on empty StrBlob");
	return data->back();
}

StrBlobPtr StrBlob::begin(){
	return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end(){
	return StrBlobPtr(*this,data->size());
}


/*define some methods of StrBlobPtr*/

std::shared_ptr<std::vector<std::string>> 
StrBlobPtr::check(std::size_t i,const std::string &msg) const {
	auto ret = wptr.lock();
	if (!ret)
		throw std::runtime_error("unbound StrBlobPtr");
	if (i >= ret->size())
		throw std::out_of_range(msg);
	return ret;
}
std::string& StrBlobPtr::deref() const{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];	
}

StrBlobPtr& StrBlobPtr::incr(){
	check(curr,"increment past end of StrBlobPtr");
	++curr;
	return *this;
}

StrBlobPtr& StrBlobPtr::operator++() {
	check(curr,"increment past end of StrBlobPtr");
	++curr;
	return *this;
}

StrBlobPtr& StrBlobPtr::operator--() {
	--curr;
	check(curr,"decrement past begin of StrBlobPtr");
	return *this;
}

StrBlobPtr StrBlobPtr::operator++(int) {
	auto ret = *this;
	++*this;
	return ret;
}

StrBlobPtr StrBlobPtr::operator--(int) {
	auto ret = *this;
	--*this;
	return ret;
}


StrBlobPtr StrBlobPtr::operator+(size_t n) {
	auto strp = *this;
	check(curr,"increment past end of StrBlobPtr");
	strp.curr += n;
	check(curr,"increment past end of StrBlobPtr");
	return strp;
}

StrBlobPtr StrBlobPtr::operator-(size_t n) {
	auto strp = *this;
	strp.curr -= n;
	check(curr,"decrement past begin of StrBlobPtr");
	return strp;
}

StrBlobPtr& StrBlobPtr::operator+=(size_t n) {
	check(curr,"increment past end of StrBlobPtr");
	curr += n;
	check(curr,"increment past end of StrBlobPtr");
	return *this;
}

StrBlobPtr& StrBlobPtr::operator-=(size_t n) {
	curr -= n;
	check(curr,"decrement past begin of StrBlobPtr");
	return *this;
}


bool operator!=(const StrBlobPtr &lhs,const StrBlobPtr &rhs) {
	return lhs.curr != rhs.curr;
}

bool operator==(const StrBlobPtr &lhs,const StrBlobPtr &rhs) {
	return lhs.curr == rhs.curr;
}

