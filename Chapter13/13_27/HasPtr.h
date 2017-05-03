#ifndef HasPtr_H
#define HasPtr_H

#include <string>


class HasPtr{
public:
	HasPtr(const std::string &s = std::string()):
		ps(new std::string(s)),i(0) { }

	HasPtr(const HasPtr &h):
		ps(h.ps),i(h.i),use(h.use) { ++*use; }		//copy constrator

	HasPtr& operator=(const HasPtr&);				//copy-assignment (deep copy)
	~HasPtr(){
		if (--*use == 0){
			delete ps;
			delete use;
		}
	}
private:
	std::string *ps;
	int i;
	std::size_t *use;
};

#endif 