#include <fstream>
#include <sstream>

#include <set>
using std::set;

#include <map>
using std::map;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <memory>
using std::shared_ptr;

#include "StrBlob.h"

class QueryResult;

class TextQuery{
public:
	TextQuery(std::ifstream &);
	QueryResult query(const string &) const;
private:
	shared_ptr<StrBlob> file;
	map<string,shared_ptr<set<StrBlob::size_type>>> word_map;
};

class QueryResult{
	using ResultIter = set<StrBlob::size_type>::iterator;
	friend std::ostream &print(std::ostream &,const QueryResult &);
public:
	QueryResult(string word,
				shared_ptr<set<StrBlob::size_type>> l,
				shared_ptr<StrBlob> f):
				word(word),line_n(l),file(f) { }
	ResultIter begin() { return line_n->begin(); }
	ResultIter end() { return line_n->end(); }
	shared_ptr<StrBlob> get_file() { return file; }
private:
	string word;
	shared_ptr<set<StrBlob::size_type>> line_n;
	shared_ptr<StrBlob> file;

};

std::ostream &print(std::ostream &,const QueryResult &);