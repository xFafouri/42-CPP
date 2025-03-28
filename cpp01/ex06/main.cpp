#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error" << std::endl;
        return (0);
    }
    std::string s1 = av[1];
    Harl test;
    test.complain(s1);
}