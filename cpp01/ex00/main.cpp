#include "Zombie.hpp"


int main()
{
    Zombie hamza("Hamza1");
    Zombie *B = newZombie("Hamza2");

    hamza.announce();
    B->announce();
    randomChump("Hamza3");

    delete B;
    return (0);
}