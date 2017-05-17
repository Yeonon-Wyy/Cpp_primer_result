#ifndef BLOB_H
#define BLOB_H

#include <memory>
#include <vector>
#include <string>
#include <initializer_list>

template <typename> class BlobPtr;
template <typename> class Blob;

template <typename T> bool operator==(const Blob<T> &,const Blob<T> &);
template <typename T> bool operator!=(const Blob<T> &,const Blob<T> &);
template <typename T> bool operator>(const Blob<T> &,const Blob<T> &);
template <typename T> bool operator<(const Blob<T> &,const Blob<T> &);
template <typename T> bool operator>=(const Blob<T> &,const Blob<T> &);
template <typename T> bool operator<=(const Blob<T> &,const Blob<T> &);


template <typename T>
class Blob
{
	friend class BlobPtr<T>;
	friend bool operator==<T>(const Blob<T>& ,const Blob<T> &);
	friend bool operator!=<T>(const Blob<T>& ,const Blob<T> &);
	friend bool operator> <T>(const Blob<T>& ,const Blob<T> &);
	friend bool operator< <T>(const Blob<T>& ,const Blob<T> &);
	friend bool operator>=<T>(const Blob<T>& ,const Blob<T> &);
	friend bool operator<=<T>(const Blob<T>& ,const Blob<T> &);


public:
	typedef T value_type;
	typedef typename std::vector<T>::size_type size_type;

	Blob();
	Blob(std::initializer_list<T> il);
	Blob(const Blob<T> &rhs) : data(std::make_shared<std::vector<T>>(*rhs.data)) { }
	Blob(Blob<T> &&rhs) noexcept : data(std::move(rhs.data)) { }
	Blob& operator=(const Blob<T> &);
	Blob& operator=(Blob<T> &&); 

	size_type size() { return data->size(); }
	bool empty() { return data->empty(); }
	void push_back(const T &t) { data->push_back(t); }
	void push_back(T &&t) { data->push_back(std::move(t)); }
	void pop_back();
	T& back();
	T& operator[](size_type i);

private:
	std::shared_ptr<std::vector<T>> data;
	void check(size_type i,const std::string &msg) const ;

};


template <typename T>
class BlobPtr{
public:
	BlobPtr():curr(0) { }
	BlobPtr(Blob<T> &a,size_t sz = 0) :
		wptr(a.data),curr(sz) { }
	T& operator*() const {
		auto p = check(curr, "dereference past end");
		return (*p)[curr];
	}
	BlobPtr& operator++();
	BlobPtr& operator--();

	BlobPtr operator++(int);
	BlobPtr operator--(int);


	T& deref();
private:
	std::shared_ptr<std::vector<T>> check(std::size_t,const std::string &) const;
	std::weak_ptr<std::vector<T>> wptr;
	std::size_t curr;
};

/*define friend member*/
template <typename T>
bool operator==(const Blob<T>& lhs, const Blob<T>& rhs) {
	return *lhs.data == *rhs.data;
}

template <typename T>
bool operator!=(const Blob<T>& lhs,const Blob<T>& rhs) {
	return *lhs.data != *rhs.data;
}

template <typename T>
bool operator>(const Blob<T>& lhs,const Blob<T>& rhs) {
	return *lhs.data > *rhs.data;
}

template <typename T>
bool operator<(const Blob<T>& lhs,const Blob<T>& rhs) {
	return *lhs.data < *rhs.data;
}

template <typename T>
bool operator>=(const Blob<T>& lhs,const Blob<T>& rhs) {
	return *lhs.data >= *rhs.data;
}

template <typename T>
bool operator<=(const Blob<T>& lhs,const Blob<T>& rhs) {
	return *lhs.data <= *rhs.data;
}


/*define class Blob member */
template <typename T>
Blob<T>::Blob(std::initializer_list<T> il):
		data(std::make_shared<std::vector<T>>(il)) { }

template <typename T>
Blob<T>& Blob<T>::operator=(const Blob<T> &rhs) {
	data = std::make_shared<std::vector<T>>(*rhs.data);
	return *this;
} 

template <typename T>
Blob<T>& Blob<T>::operator=(Blob<T> &&rhs) {
	data = std::move(rhs.data);
	return *this;
}

template <typename T>
void Blob<T>::check(size_type i,const std::string &msg) const {
	if (i >= data->size())
		throw std::out_of_range(msg);
}

template <typename T>
T& Blob<T>::back() {
	check(0,"back on empty blob");
	return data->back();
}


template <typename T>
T& Blob<T>::operator[](size_type i) {
	check(i,"subscript out of the range");
	return data[i];
}

template <typename T>
void Blob<T>::pop_back() {
	check(0,"pop_back on empty blob");
	data->pop_back();
}


/*define class Blobptr member*/


template <typename T>
std::shared_ptr<std::vector<T>> BlobPtr<T>::check(std::size_t i, const std::string& msg) const
{
    auto ret = wptr.lock();
    if (!ret) throw std::runtime_error("unbound Blob<T>Ptr");
    if (i >= ret->size()) throw std::out_of_range(msg);
    return ret;
}

template <typename T>
BlobPtr<T>& BlobPtr<T>::operator++() {
	check(curr,"increment past end of BlobPtr<T> ptr");
	++curr;
	return *this;
}

template <typename T>
BlobPtr<T>& BlobPtr<T>::operator--() {
	--curr;
	check(-1,"decrement past begin of BlobPtr");
	return *this;
}

template <typename T>
BlobPtr<T> BlobPtr<T>::operator++(int) {
	BlobPtr ret = *this;
	++*this;
	return ret;
}

template <typename T>
BlobPtr<T> BlobPtr<T>::operator--(int) {
	BlobPtr ret = *this;
	--*this;
	return ret;
}

template <typename T>
T& BlobPtr<T>::deref() {
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}


/*
Note : in order to define a template(or buluprint),
define part and declara must Under the same file.Case by [click this]https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=2&ved=0ahUKEwjhis2LpvbTAhWnqFQKHbi3B7cQFggrMAE&url=https%3A%2F%2Fwww.zhihu.com%2Fquestion%2F20630104&usg=AFQjCNFW7sQ_oEuBzP84sEm4dYJyJ9wkTw&sig2=NladsHUXOrHQPfIM9HmKMg

*/

#endif