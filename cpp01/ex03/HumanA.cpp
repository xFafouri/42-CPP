#include "HumanA.hpp"
#include "Weapon.hpp"

void HumanA::attack()
{
        std::cout << name << " attacks with their " << weapon.gettype() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &wepon) : weapon(wepon)
{
    this->name = name;
}

HumanA::~HumanA(){}
