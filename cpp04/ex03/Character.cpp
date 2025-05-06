#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const & name) : name(name) {}

Character::Character(const Character &obj)
{
}

Character &Character::operator=(const Character &obj)
{
    if (this != &obj)
    {
        
    }
    return *this;
}
std::string const& Character::getName() const
{
    return name;
}
Character::~Character()
{
}
