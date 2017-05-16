#ifndef COMPARE_H
#define COMPARE_H

#include <cstring>
#include <functional>

template <typename T> 
int compare(const T &lhs,const T &rhs) {
	if (std::less<T>()(lhs,rhs)) return -1;
	if (std::less<T>()(rhs,lhs)) return 1;
	return 0; 
}

template <unsigned N,unsigned M>
int compare(const char (&lhs)[N],const char (&rhs)[M]) {
	return std::strcmp(lhs, rhs);
}

#endif