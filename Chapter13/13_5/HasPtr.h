#ifndef HasPtr_H
#define HasPtr_H

#include <string>


class HasPtr{
public:
	HasPtr(const std::string &s = std::string()):
		ps(new std::string(s)),i(0) { }

	HasPtr(const HasPtr &h):
		ps(new std::string(*h.ps)),i(h.i) { }		//copy constrator

	HasPtr& operator=(const HasPtr& hp){				//copy-assignment (deep copy)
		std::string *new_ps = new std::string(*hp.ps);
		delete ps;
		ps = new_ps;
		i = hp.i;
		return *this;
	}
	~HasPtr(){
		delete ps;
	}
private:
	std::string *ps;
	int i;
};

#endif 