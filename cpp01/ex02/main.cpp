#include <iostream>

int main()
{
    std::string name = "HI THIS IS BRAIN";
    std::string* stringPTR = &name;
    std::string& stringREF = name;

    std::cout << "The memory address of the string variable :" << &name << std::endl;
    std::cout << "The memory address held by stringPTR :" << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF :" << &stringREF << std::endl;
    std::cout << std::endl;
    
    std::cout << "The value of the string variable :" << name << std::endl;
    std::cout << "The value pointed to by stringPTR :" << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringPTR :" << stringREF << std::endl;
}

