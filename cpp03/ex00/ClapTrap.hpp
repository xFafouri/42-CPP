#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int HitPoint;
        int EnergyPoint;
        int AttDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &obj);
        ClapTrap &operator=(const ClapTrap &obj);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        void set_name(std::string name);
        std::string getName();
        
        void setEnergyPoint(int EnergyPoint);
        int getEnergyPoint(void);

        void setHitPoint(int HitPoint);
        int getHitPoint(void);

        void setAttdamage(int AttDamage);
        int getAttdamage(void);
};

#endif

