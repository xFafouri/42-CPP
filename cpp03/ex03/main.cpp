
#include "DiamondTrap.hpp"

int	main() {
	DiamondTrap	Nono("re");
	DiamondTrap	Fou(Nono);
	Fou.attack("ssa");
	Fou.whoAmI();
	return 0;
}