#include "Cure.hpp"

Cure::Cure()
{
}

Cure::Cure(const Cure &obj)
{
}

Cure &Cure::operator=(const Cure &obj)
{
    if (this != &obj)
    {
        
    }
    return *this;
}

AMateria* Cure::clone() const 
{
        return new Cure(); 
}


void Ice::use(ICharacter& target) 
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure()
{
}
