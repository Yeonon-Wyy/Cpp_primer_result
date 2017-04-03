#include "Screen.h"


int main()
{
	Screen myScreen(5,5,'X');
	myScreen.move(4,0).set('#').display(std::cout);
	std::cout << "\n";
	myScreen.display(std::cout);
	std::cout << "\n";
	std::cout << "const Screen object: " << std::endl;
	const Screen c_Screen(5,5,'H');
	//c_Screen.move(4,0).set('W').display(std::cout);
	c_Screen.display(std::cout);
	std::cout << "\n";
	return 0;
}


//const object can't use non-const object
//So line 13 will appear error
//But We define const member display()
//So line 14 no error 
