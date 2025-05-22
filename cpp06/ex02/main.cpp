#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstddef>
#include <exception>
#include <typeinfo>

Base * generate(void)
{
    srand(time(NULL));
    int i = rand() % 3;

    switch (i) 
    {
        case(0) :
            std::cout << "choose A" << std::endl;
            return new A;
        case(1) : 
            std::cout << "choose B" << std::endl;
            return new B;
        case(2):
            std::cout << "choose C" << std::endl;
            return new C;
    } 
    return NULL;
}

void identify(Base* p)
{

    if (dynamic_cast<A*>(p)) 
    {
        std::cout << "A" << std::endl;
        return ;
    }
    else if (dynamic_cast<B*>(p)) 
    {
        std::cout << "B" << std::endl;
        return ;
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << "C" << std::endl;
        return ;
    }
    else {
        std::cout << "nothing" << std::endl;
    }
}

void identify(Base& p)
{
    try {
        A &test = dynamic_cast<A&>(p);
        (void)test;
        std::cout << "is A" << std::endl;
        return;
    }
    catch(const std::exception &e) 
    {
    }

    try {
        B &test = dynamic_cast<B&>(p);
        std::cout << "is B" << std::endl;
        (void)test;
        return;

    }
    catch(const std::exception &e) 
    {
    }

    try {
        C &test = dynamic_cast<C&>(p);
        std::cout << "is C" << std::endl;
        (void)test;
        return;

    }
    catch(const std::exception &e) 
    {
    }
}


int main()
{
    Base *p = NULL;
    p = generate();
    identify(p);

    Base &r = *p;

    identify(r);
    delete p;
}