#include "ICharacter.hpp"

ICharacter::ICharacter()
{
}

ICharacter::ICharacter(const ICharacter &obj)
{
    *this = obj;
}

ICharacter &ICharacter::operator=(const ICharacter &obj)
{
    if (this != &obj)
    {
        
    }
    return *this;
}

ICharacter::~ICharacter()
{
}
