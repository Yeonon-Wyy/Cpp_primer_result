#include "String.h"

#include <algorithm>
#include <iostream>

std::pair<char *,char *>
String::alloc_n_copy(const char *b,const char *e) {
	auto data = alloc.allocate(e - b);
	return {data,std::uninitialized_copy(b,e,data)};
}

void String::range_initializer(const char *b,const char *e) {
	auto new_data = alloc_n_copy(b,e);
	element = new_data.first;
	end_element = new_data.second;
}

String::String(const char *c) {
	char *cl = const_cast<char*>(c);
	while (*cl) ++cl;
	range_initializer(c,++cl);
}

void String::free() {
	if (element) {
		std::for_each(element,end_element,[this](char &c) { alloc.destroy(&c); });
	}
	alloc.deallocate(element,end_element - element);
}

String::String(const String& rhs) {
	range_initializer(rhs.element,rhs.end_element);
	std::cout << "copy constuctor " << std::endl;
}

String& String::operator=(const String& rhs) {
	std::cout << "copy operator" << std::endl;
	auto data = alloc_n_copy(rhs.element,rhs.end_element);
	free();
	element = data.first;
	end_element = data.second;

	return *this;
}


