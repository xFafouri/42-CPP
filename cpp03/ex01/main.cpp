#include "ScavTrap.hpp"

int	main() 
{
	ClapTrap	Robin("hamza");
	ScavTrap	Cyril("enemy");

	Robin.attack("enemy");
	Cyril.takeDamage(100);
	Cyril.beRepaired(18);
	Cyril.guardGate();
	Cyril.attack("hamza");
	return 0;
}