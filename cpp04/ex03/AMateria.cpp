#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria constructed!" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria &obj)
{
    *this = obj;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}
std::string const &	AMateria::getType() const 
{
	return this->type;
}

AMateria::~AMateria() 
{
    std::cout << "AMateria destructed!" << std::endl;

}
void AMateria::use(ICharacter& ) {
    
}

