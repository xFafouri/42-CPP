#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &obj)
{
    *this = obj;
}

Ice &Ice::operator=(const Ice &obj)
{
    if (this != &obj)
    {
        
    }
    return *this;
}

AMateria* Ice::clone() const 
{
        return new Ice(*this); 
}
void* Ice::operator new(size_t size){
    std::cout<<"HERE:::"<<std::endl;
    void *p = ::operator new(size);
    floor.liste_add(floor.liste_New(p));
    return p;
}

void Ice::use(ICharacter& target) 
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructed !!" << std::endl;
}
