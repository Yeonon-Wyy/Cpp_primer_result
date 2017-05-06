#ifndef STRING_H
#define STRING_H

#include <memory>

class String
{
public:
	String() : String("") { }
	String(const char *);
	String(const String&);
	String& operator=(const String&);
	~String() { free(); }

	char *c_str() const { return element; }
	size_t size() const { return end_element - element; }
	size_t length() const { return end_element - element - 1; }

	//consider need begin() end end() ?



private:
	char *element;
	char *end_element;
	std::allocator<char> alloc;

	//range initialize memory to String
	void range_initializer(const char * ,const char *);
	std::pair<char *, char *> alloc_n_copy(const char *,const char *);
	void free();
};

#endif