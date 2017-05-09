#include <iostream>
#include <string>
#include <vector>

class PrintString
{
public:
	PrintString(std::istream &i = std::cin,
				std::ostream &o = std::cout,
				char c = ' ') :
			is(i),os(o),sep(c) { }

	void operator()() {
		std::string str;
		while (std::getline(is, str)){
			if (is.fail())
				continue;
			else{
				data.push_back(str);
			}
		}
		
	}

	std::vector<std::string> &getData() {
		/*How many times the this function is called when use in for_each */
		std::cout << "call getdata" << std::endl;
		return data;
	}

private:
	std::vector<std::string> data;
	std::istream &is;
	std::ostream &os;
	char sep;	
};

int main() {
	PrintString printer(std::cin,std::cout,'\n');
	printer();
	for (auto &s : printer.getData()){
		std::cout << s << " ";
	}

	return 0;
}