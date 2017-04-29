#include "TextQuery.h"

TextQuery::TextQuery(std::ifstream &input) : file(new StrBlob) {
	string text;
	while (std::getline(input,text)){
		file->push_back(text);
		unsigned line_num = file->size() - 1;
		std::istringstream line(text);
		string word;
		while (line >> word){
			auto &lines = word_map[word];
			if (!lines)
				lines.reset(new set<StrBlob::size_type>);
			lines->insert(line_num);
		}	

	}
}

QueryResult
TextQuery::query(const string & word) const {
	static shared_ptr<set<StrBlob::size_type>> no_data(new set<StrBlob::size_type>);

	auto loc = word_map.find(word);
	if (loc == word_map.end())
		return QueryResult(word,no_data,file);
	else
		return QueryResult(word,loc->second,file);
}


std::ostream &print(std::ostream &os, const QueryResult &qr){
	os << qr.word << " occurs " << qr.line_n->size() << " "
	   << (qr.line_n->size() > 1 ? "times" : "time") << endl;

	for (auto num : *qr.line_n){
		StrBlobPtr p(*qr.file,num);
		os << "\t( line " << num + 1 << " ) "
		   << p.deref() << endl;  
	}
	return os;		   
}