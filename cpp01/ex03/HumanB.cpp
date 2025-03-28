#include "HumanB.hpp"

void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = new Weapon(weapon);
}
void HumanB::attack()
{   if(weapon)
        std::cout << name << "attacks with their" << weapon->gettype() << std::endl;
}
HumanB::HumanB (std::string name)
{
    this->name = name;
}
HumanB::~HumanB(){
    delete this->weapon;
}