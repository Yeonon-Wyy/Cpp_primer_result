#include <iostream>
#include <string>


int main(){
	std::string word = "";
	std::cout << "word by word" << std::endl;
	while (std::cin >> word){
		std::cout << word << " ";
	}
	std::cout << std::endl;
	return 0;
}
