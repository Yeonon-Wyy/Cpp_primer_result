#ifndef HasPtr_H
#define HasPtr_H

#include <string>
#include <iostream>

class HasPtr{
	friend void swap(HasPtr& ,HasPtr&);
	friend bool operator<(const HasPtr&,const HasPtr&);
public:
	HasPtr(const std::string &s = std::string()):
		ps(new std::string(s)),i(0) { }

	HasPtr(const HasPtr &h):
		ps(new std::string(*h.ps)),i(h.i) { }			//copy constrator

	HasPtr& operator=(HasPtr hp){
		swap(*this,hp);
		return *this;
	}				//copy-assignment (deep copy)
	~HasPtr(){
		delete ps;
	}
	void show() { std::cout << *ps << std::endl; }

private:
	std::string *ps;
	int i;
};

inline
void swap(HasPtr& lhs,HasPtr &rhs){
	using std::swap;
	swap(lhs.ps,rhs.ps);
	swap(lhs.i,rhs.i);
	std::cout << "use swap" << std::endl;
}

inline
bool operator<(const HasPtr &lhs,const HasPtr&rhs) {
	return *lhs.ps < *rhs.ps;
}

#endif 