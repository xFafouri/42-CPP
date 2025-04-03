#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


DiamondTrap::DiamondTrap()
{
    this->setHitPoint(FragTrap::getHitPoint());
    this->setEnergyPoint(ScavTrap::getEnergyPoint());
    this->setAttdamage(FragTrap::getAttdamage());
    std::cout << "DiamondTrap Constructed!" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), name(name)
{
    std::cout << "DiamondTrap parameterized Constructor called !"<< std::endl;
    this->name = name;
    this->setHitPoint(FragTrap::getHitPoint());
    this->setEnergyPoint(ScavTrap::getEnergyPoint());
    this->setAttdamage(FragTrap::getAttdamage());

}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : FragTrap(obj) , ScavTrap(obj), ClapTrap(obj)
{
	std::cout << "Copy constructor DiamondTrap called" << std::endl;
    *this = obj;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "Copy assignement operator DiamondTrap called" << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
		this->setHitPoint(obj.getHitPoint());
		this->setEnergyPoint(obj.getEnergyPoint());
		this->setAttdamage(obj.getAttdamage());
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name : " << name << std::endl;
    std::cout << "ClapTrap name :" <<  ClapTrap::getName() << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructed!" << std::endl;
}
