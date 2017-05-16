#ifndef FIND_H
#define FIND_H

template <typename _Iter,typename T>

_Iter find(const _Iter &beg,const _Iter &end, const T &val) {
	_Iter b = beg;
	while (b != end){
		if (*b == val)
			return b;
		++b;
	}
	return b;
}

#endif