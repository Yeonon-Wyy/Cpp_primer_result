#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
public:
	Employee();
	Employee(const std::string&);
	Employee(const Employee &) = delete;
	Employee& operator=(const Employee &) = delete;
	
	unsigned const id() const { return _id; }
private:
	std::string _name;
	unsigned _id;
	static unsigned _increasment;
};


#endif