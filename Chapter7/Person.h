#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person{
	friend std::istream& read(std::istream&, Person&);
	friend std::ostream& print(std::ostream&, const Person&);
public:
	Person() = default;
	Person(const std::string &n,const std::string &addr) : name(n),address(addr) { }

	const std::string& get_Name() const {return name;}
	const std::string& get_Address() const {return address;}
private:
	std::string name;
	std::string address;
};

std::istream& read(std::istream& is, Person& person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream& print(std::ostream& os, const Person& person)
{
    os << person.name << " " << person.address;
    return os;
}

#endif
