

#include "Zombie.hpp"

int main()
{
    Zombie *begin = zombieHorde( 10, "Hamza");

    for (int i = 0 ;i < 10; i++)
        begin[i].announce();
    delete [] begin;
}