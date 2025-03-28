#include <iostream>

int main(int ac , char **av)
{
    int i = 1;
    int j = 0;

    if (ac > 1)
    {
        while (i < ac)
        {
            j = 0;
            while (av[i][j])
            {
                av[i][j] = std::toupper(av[i][j]);
                std::cout << av[i][j];
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return(0);
}