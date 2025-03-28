#ifndef DiamondTrap_HPP
#define DiamondTrap_HPP

#include <iostream>

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &obj);
        DiamondTrap &operator=(const DiamondTrap &obj);
        void whoAmI();
        void attack(const std::string &target);
        ~DiamondTrap();
        
};

#endif

