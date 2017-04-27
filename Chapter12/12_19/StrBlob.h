#include <vector>
#include <memory>
#include <initializer_list>

class StrBlobPtr;

class StrBlob{
	friend class StrBlobPtr;
public:
	StrBlobPtr begin();
	StrBlobPtr end();

	using size_type = std::vector<std::string>::size_type;

	StrBlob();
	StrBlob(std::initializer_list<std::string> li);

	size_type size() const {return data->size();}
	bool empty() const {return data->empty();}
	void push_back(std::string &s) {data->push_back(s);}
	void pop_back();
	std::string &front();
	std::string &back();

private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(size_type i,const std::string &msg) const;
};

class StrBlobPtr{
public:
	StrBlobPtr() : curr(0) { }
	StrBlobPtr(StrBlob &a,std::size_t sz = 0):
		wptr(a.data),curr(sz) { }
	/*use overload operator ,convinue for traverse this*/
	bool operator!=(const StrBlobPtr &p) { return p.curr != this->curr;}	
	std::string& deref() const;
	StrBlobPtr& incr();
private:
	std::shared_ptr<std::vector<std::string>>
	check(std::size_t,const std::string &) const;
	std::size_t curr;
	std::weak_ptr<std::vector<std::string>> wptr;	
};

