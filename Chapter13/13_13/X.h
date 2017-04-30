#ifndef X_H
#define X_H

#include <iostream>
#include <string>

class X
{
public:
	X() { std::cout << "X()" << std::endl; }
	X(const X&) { std::cout << "X(const X&)" << std::endl; }
	X& operator=(const X &) { std::cout << "operator = " << std::endl; } 
	~X() { std::cout << "~X()" << std::endl;}
	
};

#endif