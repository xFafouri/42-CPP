#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main() 
{
	ClapTrap	Robin("hamza");
	FragTrap	Cyril("enemy");

	Cyril.takeDamage(100);
	Cyril.beRepaired(18);
	Cyril.attack("hamza");
	Cyril.highFivesGuys();
	return 0;
}