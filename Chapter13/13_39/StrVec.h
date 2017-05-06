#ifndef STRVEC_H
#define STRVEC_H

#include <string>
using std::string;

#include <memory>
using std::allocator;

#include <utility>
#include <initializer_list>



class StrVec
{
public:
	StrVec():
		first_free(nullptr),elements(nullptr),cap(nullptr) { };
	StrVec(std::initializer_list<string> l);	
	StrVec(const StrVec&);
	StrVec& operator=(const StrVec&);
	~StrVec() { free(); }

	void push_back(const string&);
	size_t size() const { return first_free - elements; }
	size_t capacity() const { return cap - elements; }
	string *begin() const { return elements; }
	string *end() const { return first_free; }

	void resize(size_t);
	void reserve(size_t);


private:	
	static allocator<string> alloc;
	void chk_n_alloc(){
		if (size() == capacity()) reallocate();
	}
	std::pair<string *, string *> alloc_n_copy(const string *,const string *);
	void free();
	void alloc_n_move(size_t);
	void reallocate();
	string *first_free;
	string *elements;
	string *cap;
};

#endif