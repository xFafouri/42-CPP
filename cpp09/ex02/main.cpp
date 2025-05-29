#include "PmergeMe.hpp"
#include <algorithm>
#include <utility>



int main(int ac , char **av)
{
    PmergeMe A;
    int i = 1;
    if (ac < 2)
    {
        std::cerr << "Error : nb of arg !" << std::endl;
        return 1;
    }

    if (i < ac)
    {
        while (av[i])
        {
            if(!A.check_arg(av[i]))
            {
                std::cerr << "Error" << std::endl;
                return 1;
            }
            A.fill_vector();
            i++;
        }
    }
    if (A.vector.size() % 2 != 0)
    {
        std::cout << "struggle = " << A.struggle << std::endl;
        A.vector.pop_back();   
    }
    A.fill_in_pair();

    
    std::vector<std::pair<int, int> >::iterator it = A.pairs.begin();
    for (;it != A.pairs.end(); it++) 
    {
        std::cout << "{" << it->first << ", " << it->second
             << "}" << std::endl;
    }
    //sort the pairs depend the largest element 
    // std::vector<std::pair<int, int> >::iterator iter = A.pairs.begin();
    // 


    // display largest

    std::cout << "***largest**" << std::endl; 
    std::vector<int>::iterator itt = A.largest.begin();
    for(; itt != A.largest.end(); itt++)
    {
        std::cout << *itt << std::endl;
    }
    //display lowest 
    std::cout << "***lowest**" << std::endl; 
    std::vector<int>::iterator iter = A.lowest.begin();
    for(; iter != A.lowest.end(); iter++)
    {
        std::cout << *iter << std::endl;
    }
    // binary search
        //divide the largest by 2
    A.binary_search();
    std::cout << "***after binary**" << std::endl; 
    std::vector<int>::iterator iterr = A.largest.begin();
    for(; iterr != A.largest.end(); iterr++)
    {
        std::cout << *iterr << std::endl;
    }

    // A.vector.insert(std::pair<int,  int>())
    // A.display();
}
