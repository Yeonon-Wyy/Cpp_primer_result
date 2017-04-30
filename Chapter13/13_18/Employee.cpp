#include "Employee.h"

unsigned Employee::_increasment = 1;

Employee::Employee(){
	_name = "";
	_id = _increasment++;
}

Employee::Employee(const std::string &name){
	_name = name;
	_id = _increasment++;
}