#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HitPoint(10), EnergyPoint(10), AttDamage(0)
{
    std::cout << "ClapTrap constructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "Copy constructor ClapTrap called" << std::endl;
    *this = obj;

}

ClapTrap::ClapTrap(std::string name) : name(name), HitPoint(10), EnergyPoint(10), AttDamage(0) {
    std::cout << "ClapTrap parameterized Constructor called !"<< std::endl;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "Copy assignement operator ClapTrap called" << std::endl;
    if (this != &obj)
    {       
        AttDamage= obj.AttDamage;
        HitPoint= obj.HitPoint;
        EnergyPoint= obj.EnergyPoint;
    }
    return *this;
}

void ClapTrap::setEnergyPoint(int EnergyPoint)
{
    this->EnergyPoint = EnergyPoint;
}
int ClapTrap::getEnergyPoint(void)
{
    return(EnergyPoint);
}

void ClapTrap::setHitPoint(int HitPoint)
{
    this->HitPoint = HitPoint;
}
int ClapTrap::getHitPoint(void)
{
    return(HitPoint);
}

void ClapTrap::setAttdamage(int AttDamage)
{
    this->AttDamage = AttDamage;
}
int ClapTrap::getAttdamage(void)
{
    return(AttDamage);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->HitPoint > 0 && this->EnergyPoint > 0 )
    {
        std::cout << "ClapTrap " << name << " attacks " << target;
        std::cout << " causing " << AttDamage << " points of damage!" << std::endl;
        this->EnergyPoint--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{

    if (this->HitPoint  - amount > 0 && this->EnergyPoint > 0 )
    {
        std::cout << "ClapTrap " << this->name <<" take "<< amount << " damage " << std::endl;
        this->HitPoint= this->HitPoint - amount;
        std::cout << " now has " << HitPoint <<" hit points! " << std::endl;
    }
}

void ClapTrap::set_name(std::string name)
{
    this->name = name;
}

std::string ClapTrap::getName()
{
    return(name);
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoint > 0 && this->EnergyPoint > 0)
    {
        std::cout << "ClapTrap " << this->name << " repairs itself for " << amount << " hit points!" << std::endl;
        this->HitPoint= this->HitPoint + amount;
        this->EnergyPoint--;
        std::cout << "now has " << HitPoint <<" hit points!" << std::endl;
    }
}


ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructed!" << std::endl;
}
