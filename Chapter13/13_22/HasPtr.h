#ifndef HasPtr_H
#define HasPtr_H

#include <string>


class HasPtr{
public:
	HasPtr(const std::string &s = std::string()):
		ps(new std::string(s)),i(0) { }

	HasPtr(const HasPtr &h):
		ps(new std::string(*h.ps)),i(h.i) { }			//copy constrator

	HasPtr& operator=(const HasPtr& hp);				//copy-assignment (deep copy)
	~HasPtr(){
		delete ps;
	}
private:
	std::string *ps;
	int i;
};

#endif 