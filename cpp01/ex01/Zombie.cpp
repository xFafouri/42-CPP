#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() 
{
    std::cout << "is dead" << std::endl;
}
void    Zombie::announce()
{
    std::cout << name << std::endl;
}


