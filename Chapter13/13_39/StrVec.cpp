#include "StrVec.h"

void StrVec::push_back(const string& s){
	chk_n_alloc();
	alloc.construct(first_free++,s);
}

std::pair<string *,string *>
StrVec::alloc_n_copy(const string *b,const string *e){
	auto data = alloc.allocate(e - b);
	return {data,std::uninitialized_copy(b,e,data)};
}

void StrVec::free() {
	for (auto p = first_free; p != elements;){
		alloc.destroy(--p);
	}
	alloc.deallocate(elements,cap - elements);
}

StrVec::StrVec(std::initializer_list<string> l) {
	auto newdata = alloc_n_copy(l.begin(),l.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}

StrVec::StrVec(const StrVec& s) {
	auto newdata = alloc_n_copy(s.begin(),s.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}
StrVec::StrVec(StrVec &&s) noexcept : 
	elements(s.elements),first_free(s.first_free),cap(s.cap) {
		s.elements = s.first_free = s.cap = nullptr;
}

StrVec& StrVec::operator=(StrVec &&rhs) noexcept {
	if (this != &rhs) {
		free();
		elements = rhs.elements;
		first_free = rhs.first_free;
		cap = rhs.cap;
		rhs.elements = rhs.first_free = rhs.cap = nullptr;
	}
	return *this;
}

StrVec& StrVec::operator=(const StrVec& rhs) {
	auto data = alloc_n_copy(rhs.begin(),rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}

void StrVec::alloc_n_move(size_t newcap) {
	auto newdata = alloc.allocate(newcap);
	auto dest = newdata;
	auto ele = elements;

	for (size_t i = 0; i != size(); ++i) {
		alloc.construct(dest++,std::move(*ele++));
	}

	elements = newdata;
	first_free = dest;
	cap = elements + newcap;
}

void StrVec::reallocate() {
	auto newcapacity = size() ? 2 * size() : 1;
	alloc_n_move(newcapacity);
}

void StrVec::reserve(size_t newcap) {
	if (newcap < capacity()) return;
	alloc_n_move(newcap);
}

void StrVec::resize(size_t newsize) {
	if (newsize > size()) {
		if (newsize > capacity()) reserve(2 * newsize);
		for (size_t i = size() ; i != newsize; ++i) {
			alloc.construct(first_free++,string());
		}
	}
	else if (newsize < size()) {
		while (first_free != elements + newsize) alloc.destroy(--first_free);
	}
}
