#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Constructed !"<< std::endl;
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttdamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap() 
{
    std::cout << "ScavTrap parameterized Constructor called !"<< std::endl;
	this->set_name(name);
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttdamage(20);
}

ScavTrap::ScavTrap(ScavTrap const &obj) : ClapTrap(obj)
{
    std::cout << "Copy constructor ScavTrap called" << std::endl;
    *this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "Copy assignement operator ScavTrap called" << std::endl;
    if (this != &obj)
    {  
		this->set_name(obj.getName());
		this->setHitPoint( obj.getHitPoint());
		this->setEnergyPoint(obj.getEnergyPoint());
		this->setAttdamage(obj.getAttdamage());
    }
    return(*this);
}

void  ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string &target) 
{
	if (getHitPoint() > 0 && getEnergyPoint() > 0 )
    {
        std::cout << "ScavTrap " << getName() << " attacks " << target;
        std::cout << " causing " << getAttdamage() << " points of damage!" << std::endl;
		setEnergyPoint(getEnergyPoint()-1);
    }
}

ScavTrap::~ScavTrap()
{
    std::cout << " ScavTrap Destroyed" << std::endl;
}


