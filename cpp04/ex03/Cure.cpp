#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout << "Cure constructed!" << std::endl;
    this->type = AMateria::type;
}

Cure::Cure(const Cure &obj)
{
    *this = obj;
}

Cure &Cure::operator=(const Cure &obj)
{
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

AMateria* Cure::clone() const 
{
    return new Cure(*this); 
}

void Cure::use(ICharacter& target) 
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructed !" << std::endl;
}
