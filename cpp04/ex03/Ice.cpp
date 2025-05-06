#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &obj)
{
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
        return new Ice(); 
}

void Ice::use(ICharacter& target) 
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
}
