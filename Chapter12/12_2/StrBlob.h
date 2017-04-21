#include <vector>
#include <memory>
#include <initializer_list>

class StrBlob{
public:
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
