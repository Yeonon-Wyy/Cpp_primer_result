#ifndef CONSTEXPR_H
#define CONSTEXPR_H
#include <cstring>

template <typename T,unsigned N>
constexpr unsigned arrLen(const T (&arr)[N]) {
	return N;
}


#endif