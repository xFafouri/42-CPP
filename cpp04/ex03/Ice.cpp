#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice constructed!" << std::endl;
    this->type = AMateria::type;
}

Ice::Ice(const Ice &obj)
{
    *this = obj;
}

Ice &Ice::operator=(const Ice &obj)
{
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

AMateria* Ice::clone() const 
{
    return new Ice(*this); 
}

void Ice::use(ICharacter& target) 
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructed !!" << std::endl;
}
