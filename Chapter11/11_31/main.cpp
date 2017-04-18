#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	multimap<string,string> authors{									//multimap can contain multi key & value
		{"Yeonon","CPP5"},{"WEI","JAVA8"},{"Yeonon","Python3"}
	};

	auto found = authors.find("Yeonon");
	auto cnt = authors.count("Yeonon");

	while (cnt){
		if (found->second == "CPP5"){			
			authors.erase(found);
			break;
		}
		found++;
		cnt--;
	}
	for (const auto& author : authors)
        std::cout << author.first << " " << author.second << std::endl;
	return 0;
}
