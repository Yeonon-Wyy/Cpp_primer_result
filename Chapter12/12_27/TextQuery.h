#include <fstream>
#include <memory>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <iostream>

class QueryResult;

class TextQuery{

public:
	using line_no = std::vector<std::string>::size_type;
	TextQuery(std::ifstream &);
	QueryResult query(const std::string &) const;
private:
	std::shared_ptr<std::vector<std::string>> file;
	std::map<std::string,
		std::shared_ptr<std::set<line_no>>> word_map;

};

class QueryResult{
	friend std::ostream& print(std::ostream&, const QueryResult&);	
public:
	QueryResult(std::string s,
				std::shared_ptr<std::set<TextQuery::line_no>> p,
				std::shared_ptr<std::vector<std::string>> f):
	word(s),lines(p),file(f){ }	
private:
	std::string word;
	std::shared_ptr<std::set<TextQuery::line_no>> lines;
	std::shared_ptr<std::vector<std::string>> file;		
};

std::ostream& print(std::ostream&, const QueryResult&);