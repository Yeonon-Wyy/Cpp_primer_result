#include "String.h"
#include <iostream>


int main()
{
    String str("Hello World");
    std::cout << str << std::endl;
}

/*in clang++ ,the code have a error,
  But when I use VS2015 ,this error will disappear.
  No I don't kown why.
*/