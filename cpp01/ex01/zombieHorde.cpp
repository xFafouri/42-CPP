#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    Zombie *A = new Zombie[N];

    for(int i = 0; i < N; i++)
    {
        A[i].set_name(name);
    }
    return(A);
}

