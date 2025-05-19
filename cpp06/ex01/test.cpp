#include <iostream>
#include <ctype.h>
#include <cstdlib> 
#include <cctype>

class Base {};
class Derived : public Base {};


int main()
{
    int x = 42;
    void* p = reinterpret_cast<void*>(x);

    Derived d;
    Base* b = reinterpret_cast<Base*>(&d);

    int* pi = reinterpret_cast<int*>(p); 
    std::cout << *pi << std::endl; 
}