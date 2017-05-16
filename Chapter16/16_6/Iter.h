#ifndef ITER_H
#define ITER_H

template <typename T,unsigned N>
T *Begin(const char (&arr)[N]) {
	return arr;
}

template <typename T,unsigned N>
T *End(const char (&arr)[N]) {
	return arr + N;
}

#endif