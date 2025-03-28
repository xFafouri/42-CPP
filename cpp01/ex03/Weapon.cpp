#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}
void Weapon::setType(std::string type)
{
    this->type = type;
}
const std::string& Weapon::gettype()
{
    return(type);
}
Weapon::Weapon(){}
Weapon::~Weapon(){}