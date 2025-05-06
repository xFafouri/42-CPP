#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria &obj)
{
}

AMateria &AMateria::operator=(const AMateria &obj)
{
    if (this != &obj)
    {
        
    }
    return *this;
}

AMateria::~AMateria()
{
}
