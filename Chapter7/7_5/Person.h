#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person{
public:
	const std::string& get_Name() const {return name;}
	const std::string& get_Address() const  {return address;}
private:
	std::string name;
	std::string address;
};

#endif
