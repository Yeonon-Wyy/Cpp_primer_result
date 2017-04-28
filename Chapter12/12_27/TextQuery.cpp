#include "TextQuery.h"

TextQuery::TextQuery(std::ifstream &input): file(new std::vector<std::string>) {

	std::string text;
	while (std::getline(input,text)){
		file->push_back(text);
		unsigned line_number = file->size() - 1;
		std::istringstream line(text);
		std::string word;
		while (line >> word){
			auto &lines = word_map[word];
			if (!lines)
				lines.reset(new std::set<line_no>);
			lines->insert(line_number);
		}
	}
}

QueryResult
TextQuery::query(const std::string &word) const {
	static std::shared_ptr<std::set<line_no>> no_data(new std::set<line_no>);
	auto loc = word_map.find(word);
	if (loc == word_map.end())
		return QueryResult(word,no_data,file);
	else
		return QueryResult(word,loc->second,file);
}

std::ostream& print(std::ostream &os,const QueryResult &qr){
	os << qr.word << " occurs " << qr.lines->size() << " "
	   << (qr.lines->size() > 1 ? "times" : "time") << std::endl;
	for (auto num : *qr.lines)
		os << "\t( line " << num + 1 << " ) "
		   << *(qr.file->begin() + num) << std::endl;
	return os;		      
}	