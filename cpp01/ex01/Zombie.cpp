#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() 
{
    std::cout << "is dead" << std::endl;
}
void    Zombie::set_name(std::string name)
{
    this->name = name;
}
void    Zombie::announce()
{
    std::cout << name << std::endl;
}


