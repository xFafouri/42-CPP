#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap  Constructed!" << std::endl;
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setAttdamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap() 
{
	std::cout << "FragTrap parameterized Constructor called !"<< std::endl;
	this->set_name(name);
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setAttdamage(30);
}

FragTrap::FragTrap(FragTrap const &obj) : ClapTrap(obj)
{
	std::cout << "Copy constructor FragTrap called" << std::endl;
    *this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "Copy assignement operator FragTrap called" << std::endl;
    if (this != &obj)
    {  
		this->set_name(obj.getName());
		this->setHitPoint( obj.getHitPoint());
		this->setEnergyPoint(obj.getEnergyPoint());
		this->setAttdamage(obj.getAttdamage());
    }
    return(*this);
}

void  FragTrap::highFivesGuys()
{
    std::cout << "FragTrap 🙏" << std::endl;
}

void	FragTrap::attack(const std::string &target) 
{
	if (getHitPoint() > 0 && getEnergyPoint() > 0 )
    {
        std::cout << "FragTrap " << getName() << " attacks " << target;
        std::cout << " causing " << getAttdamage() << " points of damage!" << std::endl;
		setEnergyPoint(getEnergyPoint()-1);
    }
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructed!" << std::endl;
}


